#include <iostream>

class String {
public:
  // Constructeurs
  String(const char *chaine, int taille = -1); // Constructeur d'initialisation
  String(const String &S);                     // Constructeur de copie
  ~String();                                   // Destructeur

  // Getters

  // Membres
  void afficher() const;
  int longueur() const;
  char &nieme(int i) const;
  void affiche() const;
  void saisie();
  void concatene(const char* ch);
  String& minuscule();
  friend int egal(const String ch1, const char* ch2);


private:
  char *_ch;
  int _taille;
};

int egal(const String ch1, const char* ch2);