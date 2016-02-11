#include "ma_classe.h"

int main(int argc, char* argv[]) {
  // instanciation avec le constructeur par defaut
  mareva::MaClasse une_instance;
  // instanciation avec le deuxieme constructeur
  mareva::MaClasse une_autre_instance(3);
  // appel au constructeur par defaut
  mareva::MaClasse* un_tableau = new mareva::MaClasse[255];
  
  une_instance.foo();
  
  mareva::MaClasse* une_instance_dynamique = new mareva::MaClasse(8);
  une_instance_dynamique->foo();
  
  delete une_instance_dynamique;
  delete[] un_tableau;
}