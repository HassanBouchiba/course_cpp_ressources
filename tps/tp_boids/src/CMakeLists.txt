file(GLOB_RECURSE boids_lib_SRC "boids_lib/*.h"
                                "boids_lib/*.cc")								  
add_library(boids_lib_s STATIC ${boids_lib_SRC})
target_link_libraries(boids_lib_s GL GLU glut)
