cmake_minimum_required(VERSION 3.28)
project(cDemo C)

set(CMAKE_C_STANDARD 11)

add_executable(cDemo main.c
        common/common.c
        common/common.h
        sort/smithsorts.c
        sort/smithSort.h
        find/smithfind.c
        find/smithFind.h
        struct/smithStruct.cpp
        struct/smithStruct.h
        smithLiner/SmithLinerList.cpp
        smithLiner/SmithLinerList.h
)
