cmake_minimum_required(VERSION 3.12)
project(RayTracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(RayTracing src/main.cpp src/vec3.cpp src/vec3.h src/ray.cpp src/ray.h)