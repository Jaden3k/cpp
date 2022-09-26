cmake_minimum_required(VERSION 3.0)

# set the project name
project(find_motive)

set(SRCS
        find_motive.cpp
        main.cpp
        )

set(HEADER
        find_motive.h
        )

# add the executable
add_executable(main ${SRCS} ${HEADER})