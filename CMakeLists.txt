cmake_minimum_required(VERSION 3.16)
project(lab01-inheritance-AlejandroV26)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab01-Inheritance-AlejandroV26
        src/Base.cpp src/Base.h src/Derived1.cpp src/Derived1.h src/Derived2.cpp src/Derived2.h src/main.cpp)
