cmake_minimum_required (VERSION 2.6)
project (tp_cpp)

if(CMAKE_COMPILER_IS_GNUCXX)
  add_definitions(-std=c++11)
  add_definitions(-ffriend-injection)
endif()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "_CMakePredefinedTargets")

include_directories(src)

add_subdirectory(src)
add_subdirectory(applications)
