# After creating dir out, and out/build/
# // to make two+ dir's do mkdir -p dir/dir/...
# // in build run: cmake -S ../../ -B .



# Setting cmake version:
cmake_minimum_required(VERSION 3.28.5)



# Setting c++ version requirement:
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



# Creating executable name:
project(game VERSION 1.0)



# Adding files from src directory:
file(GLOB_RECURSE SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc")
add_executable(${PROJECT_NAME} main.cc ${SRC_FILES})



# Adding files from include directory:
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include )


add_subdirectory(test)
