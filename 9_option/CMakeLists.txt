cmake_minimum_required(VERSION 3.10)

project(example)

option(DEBUG "option for debug" OFF)

add_executable(example main.cpp)

if (DEBUG)
	target_compile_definitions(example PRIVATE DEBUG)
	message(STATIC "DEBUG = ${DEBUG}")
endif()
