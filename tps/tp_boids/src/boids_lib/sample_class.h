#ifndef BOIDS_LIB_SAMPLE_CLASS_H_
#define BOIDS_LIB_SAMPLE_CLASS_H_

#include <vector>


namespace boids {

// Example of a C++ class
class SampleClass {
 public:
  // Constructor
  SampleClass();
  // Destructor
  ~SampleClass();
  // Adds the integer i to my_std_vector_ and prints it.
  void Foo(int i);  

 private:
  int my_integer_;
  std::vector<int> my_std_vector_;
};

}  // namespace boids

#endif  // BOIDS_LIB_SAMPLE_CLASS_H_
