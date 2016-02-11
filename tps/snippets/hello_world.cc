#include <iostream>
#include <string>


int main() {
  // On affiche "Hello World!" dans la sortie standard (la console).
  std::cout << "Hello World!" << std::endl;
  
  // On lit une chaine de caracteres sur l'entree standard et on l'affiche 
  // ensuite dans la sortie standard.
  std::string input_str("");
  
  std::cin >> input_str;
  std::cout << input_str << std::endl;
  
  return 0;
}