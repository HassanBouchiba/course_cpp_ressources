#ifndef MAREVA_LIB_INT_STACK_H_
#define MAREVA_LIB_INT_STACK_H_

#include <ostream>


namespace mareva {

// Perso stack container (FILO).
class IntStack {
 public:
  // Constructor. Initializes the stack with a predefined size.
  IntStack(int size);
  // Destructor
  ~IntStack();
  // Add an element to the stack.
  void Push(int value);
  // Remove an element from the stack.
  int Pop();
  // Return true if the stack is empty.
  bool IsEmpty() const; 
  // Return true if the stack is full.
  bool IsFull() const;
  // Prints the contents of the stack.
  void Print() const;

  // Overload of operator<<, prints also the contents of the stack.
  friend std::ostream& operator<<(std::ostream& os, const IntStack& stack);

 private:
  int size_;
  int index_;
  int* values_;
};

}  // namespace mareva

#endif  // MAREVA_LIB_INT_STACK_H_