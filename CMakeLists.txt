cmake_minimum_required(VERSION 3.18)

project(
  D2GS
  LANGUAGES C CXX ASM_MASM)

add_library(d2gelib INTERFACE)
target_link_libraries(d2gelib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lib/d2gelib/d2server.lib)
target_include_directories(d2gelib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include/d2gelib/)

add_subdirectory(src/d2gs/)
add_subdirectory(src/d2server_patches/)
add_subdirectory(src/d2warden/)
add_subdirectory(src/patch_d2server/)