#include <iostream>

class Vecteur3d {
	public:
	//Constructeurs
	    Vecteur3d(double x=0, double y=0, double z=0); // Constructeur d'initialisation
	    Vecteur3d(const Vecteur3d &V); // Constructeur de copie
	    ~Vecteur3d(); // Destructeur
	    
	//Getters
		double get_x() const;
		double get_y() const;
		double get_z() const;

	//Membres
	    void afficher() const;
	    Vecteur3d addition(const Vecteur3d &V) const;
	    double produitScalaire(const Vecteur3d &V) const;
	    Vecteur3d produitVectoriel(const Vecteur3d &V) const;
	
	//Surcharge
		friend bool operator==(const Vecteur3d &V1,const Vecteur3d &V2);
		friend bool operator!=(const Vecteur3d &V1,const Vecteur3d &V2);
		friend Vecteur3d operator+(const Vecteur3d &V1,const Vecteur3d &V2);
		friend double operator*(const Vecteur3d &V1,const Vecteur3d &V2);
		friend std::ostream& operator<<(std::ostream& out,const Vecteur3d &C);
		friend std::istream& operator>>(std::istream& in,Vecteur3d &C);

	private:
    		double _x, _y, _z;
};
std::ostream& operator<<(std::ostream& out,const Vecteur3d &C);
std::istream& operator>>(std::istream& in,Vecteur3d &C);
