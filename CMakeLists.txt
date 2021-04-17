#Example by frspa, a first minimal example

cmake_minimum_required(VERSION 3.2)
project(MyApp)
# or ADD_EXECUTEABLE, is case insensitive
add_executable(MyExe 
                src/main.cpp
                src/cat.hpp
                src/cat.cpp) 
                
                