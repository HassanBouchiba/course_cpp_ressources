#include <iostream>


int main(int argc, char* argv[]) {
  std::cout << "nom du programme : " << argv[0] << std::endl;	
  std::cout << "nombre d'arguments : " << argc-1 << std::endl;	
  std::cout << "liste des arguments :";
  for (int i(1); i<argc; ++i){
    std::cout << "  " << argv[i] << std::endl; 
  }
  
  return 0;
}