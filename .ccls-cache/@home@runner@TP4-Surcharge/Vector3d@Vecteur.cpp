#include "Vecteur.h"
#include <iostream>
#include <string.h>

using namespace std;

//Constructeurs 
Vecteur3d::Vecteur3d(double x,double y,double z): _x(x),_y(y),_z(z){}

Vecteur3d::Vecteur3d(const Vecteur3d &V){
	this->_x = V.get_x();
	this->_y = V.get_y();
	this->_z = V.get_z();
}


Vecteur3d::~Vecteur3d(){
	//cout << "Suppression du vecteur" << endl;
}


//Getters
double Vecteur3d::get_x()const{return this->_x;}

double Vecteur3d::get_y()const{return this->_y;}

double Vecteur3d::get_z()const{return this->_z;}



//Surcharge
bool operator==(const Vecteur3d &V1,const Vecteur3d &V2){
	return (V1._x == V2._x && V1._y == V2._y && V1._z == V2._z);
}
bool operator!=(const Vecteur3d &V1,const Vecteur3d &V2){
	return (V1._x != V2._x || V1._y != V2._y || V1._z != V2._z);
}

Vecteur3d operator+(const Vecteur3d &V1,const Vecteur3d &V2){
	Vecteur3d VecRes(V1._x + V2._x, V1._y + V2._y, V1._z + V2._z);
	return VecRes;
}

double operator*(const Vecteur3d &V1,const Vecteur3d &V2){
	return (V1._x * V2._x + V1._y * V2._y + V1._z * V2._z);
}

std::ostream& operator<<(std::ostream& out,const Vecteur3d &V){
	out << "x = "<<V._x<<", y = "<<V._y<<", z = "<<V._z<<endl;
	return out<<"\n";
}

std::istream& operator>>(std::istream& in,Vecteur3d &V){
	double x, y,z;
	cout << "x : ";
	in>> x;
	cout << "y : ";
	in>> y;
	cout << "z : ";
	in>> z;
	V._x=x;
	V._y=y;
	V._z=z;
	return in;
}

//Membres
void Vecteur3d::afficher() const {
    cout << "x = " << this->_x << ", y = " << this->_y << ", z = " << this->_z << std::endl;
}

Vecteur3d Vecteur3d::addition(const Vecteur3d &V) const {
    return Vecteur3d(this->_x + V.get_x(), this->_y + V.get_y(), this->_z + V.get_z());
}

double Vecteur3d::produitScalaire(const Vecteur3d &V) const {
    return this->_x * V.get_x() + this->_y * V.get_y() + this->_z * V.get_z();
}

Vecteur3d Vecteur3d::produitVectoriel(const Vecteur3d &V) const {
    double w1 = this->_y * V.get_z() - this->_z * V.get_y();
    double w2 = this->_z * V.get_x() - this->_x * V.get_z();
    double w3 = this->_x * V.get_y() - this->_y * V.get_x();
    return Vecteur3d(w1, w2, w3);
}




