#include <iostream>

class Complexe {
	public:
	//Constructeurs
		Complexe(int re = 5, int im = 0);
		Complexe(const Complexe &C);
		~Complexe();
	//Getters
		int get_re() const;
		int get_im() const;	
	//Setters
	
	//Members
		void afficher();
		Complexe addition(const Complexe &C) const;
		Complexe soustraction(const Complexe &C) const;
		Complexe produit(const Complexe &C) const;
	
	//Operators
		Complexe operator+(const Complexe &C) const;
		Complexe operator-(const Complexe &C) const;
		Complexe operator*(const Complexe &C) const;
		bool operator==(const Complexe &C) const;
		bool operator!=(const Complexe &C) const;
		Complexe operator=(const Complexe &C) const;
		friend std::ostream& operator<<(std::ostream& out,const Complexe &C);
		friend std::istream& operator>>(std::istream& in,Complexe &C);
	private:
		int _re;
		int _im; 
};

std::ostream& operator<<(std::ostream& out,const Complexe &C);
std::istream& operator>>(std::istream& in,Complexe &C);
