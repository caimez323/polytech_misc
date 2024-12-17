#include "Complexe.h"
#include "assert.h"
using namespace std;


//Constructeurs
Complexe::Complexe(int re, int im):_re(re),_im(im){}

Complexe::Complexe(const Complexe &C){
	this->_re = C.get_re();
	this->_im = C.get_im();
}

Complexe::~Complexe(){
	//cout << "Suppression du complexe" << endl;
}


//Getters
int Complexe::get_re() const{return this->_re;}
int Complexe::get_im() const{return this->_im;}


//Surcharge

Complexe Complexe::operator+(const Complexe &C) const {
	Complexe Cres(this->_re+C.get_re(),this->_im+C.get_im());
	return Cres;
}

Complexe Complexe::operator-(const Complexe &C) const {
	Complexe Cres(this->_re-C.get_re(),this->_im-C.get_im());
	return Cres;
}

Complexe Complexe::operator*(const Complexe &C) const {
	Complexe Cres(this->_re * C.get_re()-this->_im * C.get_im(),this->_re * C.get_im()+this->_im * C.get_re());
	return Cres;
}

bool Complexe::operator==(const Complexe &C) const{
	return (this->_re == C.get_re() && this->_im == C.get_im());
}

bool Complexe::operator!=(const Complexe &C) const{
	return (this->_re != C.get_re() || this->_im != C.get_im());
}

Complexe Complexe::operator=(const Complexe &C) const{
	Complexe Cres(C.get_re(),C.get_im());
	return Cres;
}

std::ostream& operator<<(std::ostream& out,const Complexe &C){
	out << C._re<<" + "<<C._im<<"i"<<endl;
	return out<<"\n";
}

std::istream& operator>>(std::istream& in,Complexe &C){
	int re, im;
	cout << "re : ";
	in>> re;
	cout << "im : ";
	in>>im;
	C._re = re;
	C._im = im;
	return in;
}

//Members
void Complexe::afficher(){
	cout << this->_re<<" + "<<this->_im<<"i"<<endl;
}

Complexe Complexe::addition(const Complexe &C) const{
	Complexe Cres(this->_re+C.get_re(),this->_im+C.get_im());
	return Cres;
}

Complexe Complexe::soustraction(const Complexe &C) const{
	Complexe Cres(this->_re-C.get_re(),this->_im-C.get_im());
	return Cres;
}

Complexe Complexe::produit(const Complexe &C) const{
	Complexe Cres(this->_re * C.get_re()-this->_im * C.get_im(),this->_re * C.get_im()+this->_im * C.get_re());
	return Cres;
}




