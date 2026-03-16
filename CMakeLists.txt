cmake_minimum_required(VERSION 3.5.0 FATAL_ERROR)
cmake_policy(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)

project(abi_lib_ex)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING
      "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel."
      FORCE)
endif(NOT CMAKE_BUILD_TYPE)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)

set(GCC_LIBSTDCPP11 ON)

include (Macros)
include (CompilerInfo)
include (ConfigCompilerFlags)

add_subdirectory(abi_ex)
