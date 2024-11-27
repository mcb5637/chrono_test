cmake_minimum_required(VERSION 3.28)
project(chrono_test)

set(CMAKE_CXX_STANDARD 20)

add_library(chrono_test STATIC library.cpp)
install(TARGETS chrono_test)
install(FILES library.h DESTINATION include)