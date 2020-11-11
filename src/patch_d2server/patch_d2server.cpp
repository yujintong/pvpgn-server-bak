#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    // TODO: 请用您自己的代码替换下面的示例代码。
	char buf[40960];
	char *targetbuf;
	int num,num2;
    std::cout << "Hello World" << '\n';

	FILE *fp,*d2server;
	fp = fopen("1.exe","rb");
	if (fp==NULL)
	{
		std::cout <<  "Can't open 1.exe to read" << '\n';
		return 0;
	}

	num = fread(buf,1,40960,fp);
	fclose(fp);
	
	printf("1.exe has %d bytes\n",num);

	d2server = fopen("d2server.dll","rb");
	if (d2server==NULL)
	{
		std::cout <<  "Can't open d2server.dll to read" << '\n';
		return 0;
	}

	targetbuf = (char *)malloc(1024*1024);
	num2 = fread(targetbuf,1,1024*1024,d2server);
	fclose(d2server);
	printf("d2server.dll has %d bytes\n",num2);

	d2server = fopen("d2server.dll","wb");
	if (d2server==NULL)
	{
		free(targetbuf);
		std::cout << "Can't open d2server.dll to write" << '\n';
		return 0;
	}

	if (num>512 && num2 > 0xFA00)
	{
		fseek(d2server,0,SEEK_SET);
		fwrite(targetbuf,1,0xFA00,d2server);
		fwrite(&buf[512],1,num-512,d2server);
		memset(targetbuf,0,1024*100);
		fwrite(targetbuf,1,16384-num+512,d2server);
	}
	else
	{
		std::cout << "Error, patch code less than 512 bytes!" << '\n';
	}
	free(targetbuf);
	fclose(d2server);
	std::cout << "Done" << '\n';

	return 0;
}
