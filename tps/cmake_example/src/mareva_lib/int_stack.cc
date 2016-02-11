#include <iostream>
#include "mareva_lib/int_stack.h"


mareva::IntStack::IntStack(int size)
    : size_(size),
      index_(-1),
      values_(nullptr) {
  values_ = new int[size_];    
}

mareva::IntStack::~IntStack() {
  delete[] values_;
}

void mareva::IntStack::Push(int value) {
  using std::cout; using std::endl;
  
  if (index_<size_-1) {
    ++index_;
    values_[index_] = value;
  } else {
    cout << "[IntStack] warning: full stack" << endl;
  }
}

int mareva::IntStack::Pop() {
  using std::cout; using std::endl;

  int return_value(0);

  if (index_>-1) {
    return_value = values_[index_];
    --index_;
  } else {
    cout << "[IntStack] warning: empty stack" << endl;
  }

  return return_value;
}

bool mareva::IntStack::IsEmpty() const {
  return index_==-1;
}

bool mareva::IntStack::IsFull() const {
  return index_==(size_-1);
}

void mareva::IntStack::Print() const {
  using std::cout; using std::endl;

  cout << *this;
}

std::ostream& mareva::operator<<(std::ostream& os, const IntStack& stack) {
  os << "[";

  for (int i(0); i<stack.index_; ++i) {
    os << stack.values_[i] << " ; ";
  }
  
  if (!stack.IsEmpty()) {
    os << stack.values_[stack.index_];
  }

  os << "]";

  return os;
}