cmake_minimum_required(VERSION 3.9)
project(ShapeCalculator)

set(CMAKE_CXX_STANDARD 11)

add_executable(ShapeCalculator main.cpp Shape.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h
        ShapeReader.cpp ShapeReader.h)