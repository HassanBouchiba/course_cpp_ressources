cmake_minimum_required (VERSION 2.6)
project (boids)

if(CMAKE_COMPILER_IS_GNUCXX)
  add_definitions(-std=gnu++11)
  add_definitions(-ffriend-injection)
endif()

include_directories(src)
include_directories(third_party/eigen)

add_subdirectory(src)
add_subdirectory(applications)
