# Glut application
add_executable(app_boids app_boids.cc )
target_link_libraries(app_boids boids_lib_s)

# Example of Eigen usage
add_executable(hello_eigen hello_eigen.cc)

# Usage of sample class
add_executable(hello_sample hello_sample.cc)
target_link_libraries(hello_sample boids_lib_s)
