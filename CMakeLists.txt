# Firs call must always be the required cmake minimus version
# For compatibility and feature recognition
cmake_minimum_required(VERSION 3.16)
# Decond: project for project name, version and supported 
# languages. Project Name IS required
project(MyApp
        VERSION 0.0.1
        LANGUAGES CXX)
# or ADD_EXECUTEABLE, is case insensitive
add_executable(MyExe 
                src/main.cpp
                src/cat.hpp
                src/cat.cpp) 
                
                