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

message("-------------------------------------------------------------------") 
message("Just printing some stuff during configuration.\n Before the generator starts")
message("")
message("Top level:")
message(" PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message(" MyApp_SOURCE_DIR = ${MyApp_SOURCE_DIR}")
add_subdirectory(child)
message("Remember: use project name in variable to distibguish them in bigger projects")
message("--------------------------------------")
message("Difference between add_subdir and include")
add_subdirectory(subdir)
message("")
include(subdir/CMakeLists.txt)
message("Differences: Include does not open a new variable scope")
message("--------------------------------------")
                