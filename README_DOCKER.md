Player vs Player Gaming Network - PRO on Docker
=====

To quickly deploy a PVPGN server on linux, using Docker is one of the best choices. You can gain some benefits using this:
- Small image size: approx 234MB uncompressed, 57MB compressed image size
- Quick deploy, easy to scale out, manage and update
- Simple to use and config

## Prequisite:

- `docker` (Check [this link](https://docs.docker.com/engine/install/) for installation manual) 
  - you can use `podman` instead of `docker`, but in this manual we will use `docker` cli so you may need `podman` with `docker` cli support
- (optionally) `docker-compose` for better configuration, deployment and logging managing

## How to build:

There are some supported build arguments:

| Build Argument | Original CMAKE Option | Default Value |
|----------------|-----------------------|---------------|
| with_bnetd     | WITH_BNETD            | true          |
| with_d2cs      | WITH_D2CS             | false         |
| with_d2dbs     | WITH_D2DBS            | false         |
| with_lua       | WITH_LUA              | false         |
| with_mysql     | WITH_MYSQL            | true          |
| with_sqlite3   | WITH_SQLITE3          | false         |
| with_pgsql     | WITH_PGSQL            | false         |
| with_odbc      | WITH_ODBC             | false         |

And some extra build args which is not related to CMAKE:

| Build Argument | Description                       | Default Value |
|----------------|-----------------------------------|---------------|
| git_repo       | The repository you want to clone  | this repo url |
| git_branch     | The branch you want to build from | develop       |

Adding above build arguments to enable/disable features (Image tagging will helps you distinguish image capabilities/features)

There are some enviroment variables you might want to override:

| Env Var     | Description                                             | Default Value |
|-------------|---------------------------------------------------------|---------------|
| SERVER_TYPE | Server type, choose between `d2cs`, `d2dbs` and `bnetd` | `bnetd`       |

Choose the appropriate `SERVER_TYPE` base on your image build

Below are some sample build commands:

```bash
# This command will use all default build arguments and build PVPGN docker image with only bnetd and mysql support using master branch
docker build . -t pvpgn-server:bnetd-mysql

# This command will build a PVPGN with only d2cs and sqlite3 support using develop branch
docker build . \
  --build-arg with_d2cs=true \     # enable d2cs support (disable by default)
  --build-arg with_bnetd=false \   # enable bnetd support (enable by default)
  --build-arg with_mysql=false \   # enable mysql support (enable by default)
  --build-arg with_sqlite3=true \  # enable sqlite3 support (disable by default)
  --build-arg git_branch=develop \ # switch to develop branch (master branch by default)
  -t pvpgn-server:d2cs-sqlite      # tag the image 
```

## How to run and manage:

### Using docker only:

To run the images, you will need to mount existed configuration files and assets which is located at `/usr/local/etc/pvpgn` and `/usr/local/var/pvpgn` inside the container. The example bellow shows how to obtain configuration files and turn up some pvpgn servers with `mysql` support:

1. Prepare images:

```bash
docker build . -t pvpgn-server:bnetd-mysql
docker build . --build-arg with_d2cs=true --build-arg with_bnetd=false -t pvpgn-server:d2cs-mysql
docker build . --build-arg with_d2dbs=true --build-arg with_bnetd=false -t pvpgn-server:d2dbs-mysql
```

2. Prepare configuration files and assets (skip this step if you've already had them):

```bash
# create configuration and asset locations
mkdir -p /your/config/dir /your/assets/dir
# copy configuration files and base assets from an image, all base configuration files in any image are the same
docker run -v /your/config/dir:/tmp/conf --rm --entrypoint cp pvpgn-server:bnetd-mysql -r /usr/local/etc/pvpgn/* /tmp/conf
docker run -v /your/assets/dir:/tmp/assets --rm --entrypoint cp pvpgn-server:bnetd-mysql -r /usr/local/etc/pvpgn/* /tmp/assets
```
Modifying the copied configuration files to fit your needs. check [this link](https://pvpgn.pro/pvpgn_installation.html) to get more information.

```bash
# start mysql to store data
docker run -d \              # run detached
  --name mysql \             # set a name for mysql
  --restart unless-stopped \ # auto restart the container if it crash or server restart, unless you manually stop it
  -v /your/db/storage:/var/lib/mysql \ # mount database storage to the host
  mysql:8.0 --default-authentication-plugin=mysql_native_password # use native password instead of default "caching_sha2_password" authentication plugin, which is not supported by php and some legacy software
```

3. Start services:

```bash
# run pvpgn with bnetd and mysql support
docker run -d \
  --name pvpgn-bnetd \
  --restart unless-stopped \
  -p 6112:6112 -p 6112:6112/udp \ # forwarding default bnetd port with both tcp and udp protocol
  -v /your/config/dir:/usr/local/etc/pvpgn \ # configuration mounting
  -v /your/assets/dir:/usr/local/var/pvpgn \ # assets mounting
  pvpgn-server:bnetd-mysql                   # bnetd with mysql support image

# run pvpgn with d2cs and mysql support
docker run -d \                   
  --name pvpgn-d2cs \            
  --restart unless-stopped \
  -e SERVER_TYPE=d2cs \ # override bnetd server type to d2cs
  -p 6113:6113 -p 6113:6113/udp \ # forwarding default d2cs port
  -v /your/config/dir:/usr/local/etc/pvpgn \ 
  -v /your/assets/dir:/usr/local/var/pvpgn \ 
  pvpgn-server:d2cs-mysql # d2cs with mysql support image

# run pvpgn with d2dbs and mysql support
docker run -d \
  --name pvpgn-d2dbs \
  --restart unless-stopped \
  -e SERVER_TYPE=d2dbs \ # override bnetd server type to d2dbs
  -p 6114:6114 -p 6114:6114/udp \ # forwarding default d2cdb port
  -v /your/config/dir:/usr/local/etc/pvpgn \ 
  -v /your/assets/dir:/usr/local/var/pvpgn \ 
  pvpgn-server:d2dbs-mysql # d2dbs with mysql support image
```

#### Obtain logs

To obtain logs of the container, example to get `pvpgn-bnetd` log, run this command:

```bash
docker logs -f \ # view container logs continuously, ommit "-f" option if you don't want to keep seeing the logs
  --tail 1000 \  # get last 1000 lines of log ommit this to show all logs or decrease to 500 or 200 if you don't want to see too much log
  pvpgn-bnetd    # name of the container which is set above
```

Change `pvpgn-bnetd` to `pvpgn-d2cs` or `pvpgn-d2dbs` to get corresponding container log

### Using docker-compose:

To simplify the managing process, we should use `docker-compose`. The step-by-step example below will help you to create a system of 3 different containers running `bnetd`, `d2cs` and `d2dbs` with `mysql` storage:

1. Prepare images:

```bash
docker build . -t pvpgn-server:bnetd-mysql
docker build . --build-arg with_d2cs=true --build-arg with_bnetd=false -t pvpgn-server:d2cs-mysql
docker build . --build-arg with_d2dbs=true --build-arg with_bnetd=false -t pvpgn-server:d2dbs-mysql
```

2. Prepare configuration files and assets (skip this step if you've already had them):

```bash
mkdir -p /your/config/dir /your/assets/dir
# copy configuration files and base assets from an image, all base configuration files in any image are the same
docker run -v /your/config/dir:/tmp/conf --rm --entrypoint cp pvpgn-server:bnetd-mysql -r /usr/local/etc/pvpgn/* /tmp/conf
docker run -v /your/assets/dir:/tmp/assets --rm --entrypoint cp pvpgn-server:bnetd-mysql -r /usr/local/etc/pvpgn/* /tmp/assets
```

3. Copy the sample `docker-compose.yml` file from this repository and modify it to suit you (like changing volume mounting)

4. Finally, hit `docker-compose up -d` to turn up all containers

#### Obtain logs

To obtain logs from containers managed by `docker-compose`, use this command:
```bash
cd /your/docker-compose-file/dir # move to the directory containing the docker-compose.yml file

docker-compose logs --tail 1000 # get last 1000 log lines of all containers managed by docker-compose
# or
docker-compose logs --tail 1000 bnetd # get last 1000 log lines of bnetd only
```

## Some notes:

Here are some notes from my experience:

### Spin up a simple server:

Sometimes you just need a small server (for a small group of friends to play DotA) then just build pvpgn with sqlite support and mount the configuration files you want and let the rest unchanged:

```bash
# Prepare image with sqlite support
docker build . --build-arg with_sqlite3=true --build-arg with_mysql=false -t pvpgn-server:bnetd-sqlite

docker run -d \
  --name pvpgn-bnetd \
  -p 6112:6112 -p 6112:6112/udp \
  -v /your/config/dir/bnetd.conf:/usr/local/etc/pvpgn/bnetd.conf \ # just mount the bnetd configuration files
  pvpgn-server:bnetd-sqlite
```

### Optimize networking performance:

Disable `userland-proxy` is recommended to run a big PVPGN server due to [performance degradation](https://franckpachot.medium.com/high-cpu-usage-in-docker-proxy-with-chatty-database-application-disable-userland-proxy-415ffa064955).

<div class="text-red mb-2">
    <h4>WARNING: After turning off `userland-proxy`, docker can manipulate your iptables without asking you. Use it with cares!</h4>
</div>

To achieve this, add `"userland-proxy": false` to `/etc/docker/daemon.json`:
```json
{
    "userland-proxy": false
    // some more options
}
```

then restart docker daemon:
```bash
sudo systemctl restart docker
```

If this file does not exist, just create it and add this to the file and restart docker daemon with the command above:
```json
{
    "userland-proxy": false
}
```