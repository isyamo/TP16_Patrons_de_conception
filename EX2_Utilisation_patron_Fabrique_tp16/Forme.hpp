#ifndef FORME_HPP
#define FORME_HPP

#include <iostream>
#include <string>

// Classe abstraite
class Forme {
public:
	// Destructeur virtuel
	virtual ~Forme() {
	}

	// Méthode virtuelle
	virtual void afficher() const = 0;
};

// Classe Cercle
class Cercle: public Forme {
public:
	void afficher() const override {
		std::cout << "\n Je suis un Cercle." << std::endl;
	}
};

// Classe Carré
class Carre: public Forme {
public:
	void afficher() const override {
		std::cout << "\n Je suis un Carré." << std::endl;
	}
};

// Classe Triangle
class Triangle: public Forme {
public:
	void afficher() const override {
		std::cout << "\n Je suis un Triangle." << std::endl;
	}
};

#endif
