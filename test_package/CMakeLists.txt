cmake_minimum_required(VERSION 3.15)
project(PackageTest CXX)

find_package(chrono_test CONFIG REQUIRED)

add_executable(example example.cpp)
target_link_libraries(example chrono_test::chrono_test)