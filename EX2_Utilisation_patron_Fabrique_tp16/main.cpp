#include <iostream>
#include "Forme.hpp"
#include "FabriqueForme.hpp"

int main() {
	std::cout << "\n <<< TEST DU PATRON FABRIQUE >>> " << std::endl;

	//  Creation  des formes

	Forme *f1 = FabriqueForme::creerForme("cercle");
	Forme *f2 = FabriqueForme::creerForme("carre");
	Forme *f3 = FabriqueForme::creerForme("triangle");

	if (f1)
		f1->afficher();
	if (f2)
		f2->afficher();
	if (f3)
		f3->afficher();

	// Test avec un type invalide
	std::cout << "\n Tentative de creer une forme inconnue  " << std::endl;
	Forme *f4 = FabriqueForme::creerForme("rectangle");
	if (f4 == nullptr) {
		std::cout << "\n Erreur : Type de forme inconnu, creation impossible.\n"
				<< std::endl;
	}

	// Libération de la mémoire
	delete f1;
	delete f2;
	delete f3;

	return 0;
}
