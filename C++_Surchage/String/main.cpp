#include "String.h"
#include <iostream>
#include <string.h>

using namespace std;

int main() {

  cout << endl << "Debut main.cpp" << endl << endl;
  // QUESTION 4

  String ch1("essai");
  String ch2 = ch1;
  String ch3("=", 80); // (1er caractere, taille max)
  cout << "Longueur de ch3 : "<<ch3.longueur() << endl;
  const String ch4("chaîne constante");
  ch1.nieme(1) = 'S'; // le caractère 1 de la chaîne
  ch1.affiche();
  ch2.saisie();
  ch2.concatene(" de la classe String");
  ch2.affiche();
  ch2.minuscule().affiche();
  if (egal(ch1,"eSsai")){
  cout << "C'est la meme chaine !" << endl;
  }
}
