#include <iostream>
#include <vector>
#include <string>
#include "StrategieTri.hpp"
#include "GestionnaireTri.hpp"

void afficherVecteur(const std::vector<std::string> &vec) {
	for (const std::string &s : vec) {
		std::cout << "\"" << s << "\" ";
	}
	std::cout << std::endl;
}

int main() {
	std::cout << "\n <<< TEST DU PATRON STRATEGIE >>> " << std::endl;

	std::vector<std::string> mots = { "C++", "Java", "Python", "Go",
			"JavaScript", "C" };

	std::cout << " \n Donnees initiales : ";
	afficherVecteur(mots);

	// Instanciation des differentes strategies
	TriCroissant triCroissant;
	TriDecroissant triDecroissant;
	TriParLongueur triParLongueur;

	// Initialisation du gestionnaire avec le tri croissant
	GestionnaireTri gestionnaire(&triCroissant);

	std::cout << "\n ==> Application du tri croissant : \n " << std::endl;
	gestionnaire.executerTri(mots);
	afficherVecteur(mots);

	// Changement dynamique de strategie pour le tri decroissant
	std::cout << "\n ==> Changement dynamique pour le tri décroissant :  \n "
			<< std::endl;
	gestionnaire.setStrategie(&triDecroissant);
	gestionnaire.executerTri(mots);
	afficherVecteur(mots);

	// Changement dynamique de strategie pour le tri par longueur
	std::cout << "\n ==> Changement dynamique pour le tri par longueur :  \n "
			<< std::endl;
	gestionnaire.setStrategie(&triParLongueur);
	gestionnaire.executerTri(mots);
	afficherVecteur(mots);

	return 0;
}
