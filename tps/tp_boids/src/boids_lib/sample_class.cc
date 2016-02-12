#include <iostream>
#include <vector>
#include "boids_lib/sample_class.h"


boids::SampleClass::SampleClass() 
    : my_integer_(0) {
  std::cout << "[SampleClass] constructeur" << std::endl;
}

boids::SampleClass::~SampleClass() {
  std::cout << "[SampleClass] destructeur" << std::endl;
}

void boids::SampleClass::Foo(int i) {
  std::cout << "[SampleClass] foo" << std::endl;
  
  my_std_vector_.push_back(i);
  for (int i(0); i<my_std_vector_.size(); ++i) {
    std::cout << my_std_vector_[i] << " ";
  }
  std::cout << std::endl;
}
