cmake_minimum_required(VERSION 3.8)
project(geo_surveying)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp point.cpp point.h angle.cpp angle.h horizontal_point.cpp horizontal_point.h traversing.cpp traversing.h traversing_solution.cpp traversing_solution.h sight_height.cpp sight_height.h three_wire_levelling.cpp three_wire_levelling.h three_wire_levelling_solution.cpp three_wire_levelling_solution.h sight_point.cpp sight_point.h printer.cpp printer.h)
add_executable(geo_surveying ${SOURCE_FILES})