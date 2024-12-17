#include "String.h"
#include <iostream>
#include <string.h>
using namespace std;

// Constructeurs
String::String(const char *chaine, int taille) {

  if (taille == -1) {
    taille = strlen(chaine);
    cout << "Longueur auto : " << taille<<"  ";
  }
  this->_taille = taille;
  this->_ch = new char[taille];

  // Copie de la chaine en paramètre
  int i = 0;
  while (i < taille && chaine[i] != '\0') {
    (this->_ch)[i] = chaine[i];
    i++;
  }
  cout << "Création de la chaine : '" << this->_ch << "'" << endl;
}

String::String(const String &S) {
  this->_taille = S.longueur();
  this->_ch = new char[_taille];
  int i = 0;

  while (i < this->_taille && S.nieme(i) != '\0') {
    (this->_ch)[i] = S.nieme(i);
    i++;
  }
  cout << "Création de la chaine : '" << this->_ch << "' par copie" << endl;
}
String::~String() {
  //cout << strlen(this->_ch);
  cout << "Suppression de la chaine '" << this->_ch << "'" << endl;
  delete[] this->_ch;
}

// Membres

int String::longueur() const {
  int i = 0;
  while (i < (this->_taille) && (this->_ch)[i] != '\0') {
    i++;
  }
  return i;
}

char &String::nieme(int i) const { return (this->_ch)[i]; }

void String::affiche() const {
  int i = 0;
  cout << endl;
  while (i < (this->_taille) && (this->_ch)[i] != '\0') {
    cout << (this->_ch)[i];
    i++;
  }
  cout << endl;
}

void String::saisie() {
  char* tmp = new char[1024];
  cout << "Entrez une nouvelle chaine : \n";
  cin >> tmp;
  if (strlen(tmp) >= 1024) {
    cout << "Trop longue chaine";
    return;
  }
  this->_taille = strlen(tmp);
  this->_ch = tmp;

}


void String::concatene(const char* ch){
  strcat(this->_ch, ch);
  this->_taille += strlen(ch);
}

String& String::minuscule(){
  int i = 0;
  while (i < (this->_taille) && (this->_ch)[i] != '\0') {
    if ((this->_ch)[i] >= 'A' && (this->_ch)[i] <= 'Z'){
        (this->_ch)[i] += 32;
    }
    i++;
  }
  return (*this);
}

//Autre

int egal(const String ch1, const char* ch2){
  if(strlen(ch2) != ch1._taille){
    return 0;
  }
  int i = 0;
  while (i < (ch1._taille) && (ch1._ch)[i] != '\0') {
    if ((ch1._ch)[i] != ch2[i]){
        return 0;
    }
    i++;
  }
  return 1;
}