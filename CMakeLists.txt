cmake_minimum_required(VERSION 3.12)
project(RayTracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(RayTracing src/main.cpp src/vec3.h src/ray.h src/hitable.h src/sphere.h src/hitable_list.h src/camera.h src/material.h)