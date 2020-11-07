cmake_minimum_required(VERSION 3.14)

project(Factory-Pattern LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${CMAKE_PROJECT_NAME}
  main.cpp
  transportation.cpp
  transportationfactory.cpp
  truck.cpp
  ship.cpp

  transportation.h
  transportationfactory.h
  truck.h
  ship.h

)
