#include "Vecteur.h"
#include <iostream>
#include <string.h>

using namespace std;

int main() {

	cout <<endl<< "Debut main.cpp" << endl << endl;
//Code du TP 2
	/*
	  Vecteur3d v1;
	  cout << "v1 : ";
	  v1.afficher();

	  Vecteur3d v2(1.0, 2.0, 3.0);
	  cout << "v2 : ";
	  v2.afficher();

	  
	  
	  Vecteur3d v3(v2);
	  cout << "v3 : ";
	  v3.afficher();

	  Vecteur3d v4 = v1.addition(v2);
	  cout << "v4 : ";
	  v4.afficher();


	  double produitScalaire = v2.produitScalaire(v3);
	  cout << "Produit scalaire : "<<produitScalaire << endl;

	  Vecteur3d v5 = v1.produitVectoriel(v2);
	  cout << "v5 : ";
	  v5.afficher();
	*/

//TP 4 
	//Question 3
	
	//Surcharge du ==  et du != avec des fonctions amies
	/*
	Vecteur3d VSE1(6,7,8);
	Vecteur3d VSE2(VSE1);
	cout << (VSE1==VSE2)<<endl;
	cout << (VSE1!=VSE2)<<endl;
	*/
	
	//Surcharge du + et du * avec des fonctions amies
	/*
	Vecteur3d VSO1(6,7,8);
	Vecteur3d VSO2(6,7,8);
	
	Vecteur3d VSS = VSO1+VSO2;
	cout << "\nSomme : \n";
	VSS.afficher();
	
	double prodScalaire = VSO1 * VSO2;
	cout << "\nProduit Scalaire : \n"<<prodScalaire << endl;
	*/
	
	//Surcharge du << et du >> avec des fonctions amies
	Vecteur3d Vout1;
	cin >> Vout1;
	cout << Vout1;
	
	


}
