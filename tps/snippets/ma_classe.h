#ifndef MON_PROJET_MA_CLASSE_H_
#define MON_PROJET_MA_CLASSE_H_


namespace mareva {
  
class MaClasse {
 public:
  // Constructeur par defaut. Permet d'instancier des tableaux de MaClasse.
  MaClasse();
  // Autre constructeur.
  MaClasse(int num);
  // Constructeur par recopie.
  MaClasse(const MaClasse& autre_instance);
  // Destructeur
  ~MaClasse();
  
  // Surcharge de l'operateur assignement.
  MaClasse& operator=(const MaClasse& autre_instance); 
  // Methode de classe.
  void foo();

 private:
  int num_points_;
  float* tab_; 
};  // attention au point virgule ici!
  
}  // namespace mareva

#endif  // MON_PROJET_MA_CLASSE_H_