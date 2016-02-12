#include <iostream>
#include "boids_lib/sample_class.h"


int main(int argc, char* argv[]) {
  boids::SampleClass my_class;
  my_class.Foo(1);
  my_class.Foo(3);
  my_class.Foo(-212);
}
