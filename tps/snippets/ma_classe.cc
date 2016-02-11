#include <iostream>
#include "ma_classe.h"

mareva::MaClasse::MaClasse()
    : num_points(0), 
      tab_(nullptr) {}
      
mareva::MaClasse::MaClasse(int num)
    : num_points(num), 
      tab_(nullptr) {
  tab_ = new float[num_];        
}

mareva::MaClasse::MaClasse(const MaClasse& autre_instance) {
  num_points_ = autre_instance.num_points_;
  
  delete[] tab_;        
  tab_ = nullptr;
  tab_ = new float[num_points_];
  
  for (int i(0); i<num_points_; ++i) {
    tab_[i] = autre_instance[i];    
  }
}

mareva::MaClasse::~MaClasse() {
  delete[] tab_;        
}       

mareva::MaClasse& mareva::MaClasse::operator=(const MaClass& autre_instance) {
  num_points_ = autre_instance.num_points_;
  
  delete[] tab_;        
  tab_ = nullptr;
  tab_ = new float[num_points_];
  
  for (int i(0); i<num_points_; ++i) {
    tab_[i] = autre_instance[i];    
  }
}       

void mareva::MaClasse::foo() {
  std::cout << "foo !" << std::endl;
}