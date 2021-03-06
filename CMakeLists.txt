cmake_minimum_required(VERSION 3.4.3)
project(oceanbase)

# Note that if already defined, you should clean cmake cached in order to make them undefined
if (NOT DEFINED TBLIB_ROOT)
    message(FATAL_ERROR "TBLIB_ROOT not set")
endif()

if (NOT DEFINED EASY_ROOT)
    message(FATAL_ERROR "EASY_ROOT not set")
endif()

message("TBLIB_ROOT=${TBLIB_ROOT}, EASY_ROOT=${EASY_ROOT}")

# These options come from Makefile generated by original configure
# different target may have slightly different options, which may influence
# compiling and running. 
# If something is wrong, you can refer to flags.md created from those Makefile
add_definitions(-DPACKAGE_NAME=\"OceanBase\" -DPACKAGE_TARNAME=\"oceanbase\" -DPACKAGE_VERSION=\"0.4.2.9\" -DPACKAGE_STRING=\"OceanBase\ 0.4.2.9\" -DPACKAGE_BUGREPORT=\"qushan@taobao.com\" -DPACKAGE_URL=\"http://oceanbase.taobao.org/\" -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_DLFCN_H=1 -DLT_OBJDIR=\".libs/\" -DPACKAGE=\"oceanbase\" -DVERSION=\"0.4.2.9\" -DRELEASEID=\"\")

add_definitions(-D__STDC_LIMIT_MACROS -D_OB_VERSION=400 -D__STDC_CONSTANT_MACROS -D_NO_EXCEPTION)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -g -fPIC -Wno-deprecated")
#-Wall -Wextra -Wunused-parameter -Wformat -Wconversion -fno-strict-aliasing

# changing it will results in overall re-compilation
#set(CMAKE_CXX_COMPILER g++)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# cannot write behind
link_directories(${CMAKE_BINARY_DIR}/lib
        ${TBLIB_ROOT}/lib 
        ${EASY_ROOT}/lib
        )

include_directories(
        src 
        ${TBLIB_ROOT}/include/tbsys
        ${TBLIB_ROOT}/include/tbnet
        ${EASY_ROOT}/include/easy
        )

add_subdirectory(src)
