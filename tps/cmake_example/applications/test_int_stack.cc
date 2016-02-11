#include <iostream>
#include <mareva_lib/int_stack.h>


static const int kStackSize = 5;

void PrintStackStatus(mareva::IntStack& stack);

int main(int argc, const char* argv[]) {
  mareva::IntStack my_stack(kStackSize);

  
  // Get the arch of the compiler
  if (sizeof(void*)==4) {
    std::cout << "32-bits program" << std::endl;
  } else {
    std::cout << "64-bits program" << std::endl;     
  }
  std::cout << std::endl;
  

  // Test IntStack features
  PrintStackStatus(my_stack);

  my_stack.Push(4);
  PrintStackStatus(my_stack);

  my_stack.Push(8);
  PrintStackStatus(my_stack);

  my_stack.Push(7);
  PrintStackStatus(my_stack);

  my_stack.Push(47);
  PrintStackStatus(my_stack);

  my_stack.Push(-7);
  PrintStackStatus(my_stack);

  my_stack.Push(78);
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

  std::cout << "poped value: " << my_stack.Pop() << std::endl;
  PrintStackStatus(my_stack);

	return 0;
}

void PrintStackStatus(mareva::IntStack& stack) {
  std::cout 
  << std::boolalpha
  << "my_stack:" << std::endl
  << "  empty: " << stack.IsEmpty() << std::endl
  << "  full: " << stack.IsFull() << std::endl
  << "  contains: " << stack << std::endl << std::endl;
}
