#include <iostream>
#include <string.h>
#include "Complexe.h"
using namespace std;


int main(){

	cout <<endl<< "Debut main.cpp" << endl << endl;
	
//QUESTION 1

	//Test de l'init par défault
	
	/*
	Complexe C1(1,10);
	C1.afficher();
	*/
	
	
	//Test de l'init de copie
	/*
	Complexe CC1(1,10);
	Complexe CC2(CC1);
	CC2.afficher();
	*/
	
	//Test de l'addition, soustraction, produit
	/*
	cout << "2 complexes : \n";
	Complexe CO1(5,5);
	Complexe CO2(2,3);
	CO1.afficher();
	CO2.afficher();
	
	cout << "\nAddition\n";
	Complexe CAdd1;
	CAdd1 = CO1.addition(CO2);
	CAdd1.afficher();
	
	cout << "\nSoustraction\n";
	Complexe CSous1;
	CSous1 = CO1.soustraction(CO2);
	CSous1.afficher();
	
	cout << "\nProduit\n";
	Complexe CPro1;
	CPro1 = CO1.produit(CO2);
	CPro1.afficher();
	*/


//QUESTION 2
	//Surchage du == et //Surcharge du !=
	
	/*
	cout << "Surchage du ==\n";
	Complexe CSEgal1(1,1);
	Complexe CSEgal2(1,3);
	cout << "\nSurcharge de l'addition\n";
	cout << (CSEgal1 == CSEgal1) <<endl;
	cout << (CSEgal2 == CSEgal1) <<endl<<endl;
	
	cout << "Surchage du !=\n";
	cout << (CSEgal1 != CSEgal1) <<endl;
	cout << (CSEgal2 != CSEgal1) <<endl<<endl;
	*/
	
	//Surcharge de =
	/*
	cout << "\nSurcharge de = \n";
	Complexe CSEgal3(50,39);
	Complexe CSEgal4 = CSEgal3;
	CSEgal3.afficher();
	CSEgal4.afficher();
	*/
	
	
	//Surcharge de l'addition
	/*
	cout << "\nSurcharge de l'addition\n";
	Complexe CSAdd1(1,10);
	Complexe CSAdd2(5,4);
	Complexe CSAdd3 = CSAdd1+CSAdd2;
	CSAdd3.afficher();
	*/
	
	//Surcharge de la soustraction
	/*
	cout << "\nSurcharge de la soustraction\n";
	Complexe CSSous1(1,10);
	Complexe CSSous2(5,4);
	Complexe CSSous3 = CSSous1-CSSous2;
	CSSous3.afficher();
	*/
	
	//Surcharge du produit
	/*
	cout << "\nSurcharge du produit\n";
	Complexe CSPro1(1,10);
	Complexe CSPro2(5,4);
	Complexe CSPro3 = CSPro1*CSPro2;
	CSPro3.afficher();
	*/

	//Surcharge de l'affichage
	
	cout <<"\nSurcharge de l'affichage\n";
	Complexe CSA;
	cout << CSA;
	
	
	//Surcharge de l'input
	/*
	cout <<"\nSurcharge de l'input\n";
	Complexe CSA;
	cin >> CSA;
	CSA.afficher();
	*/
	
	return 0;
}
