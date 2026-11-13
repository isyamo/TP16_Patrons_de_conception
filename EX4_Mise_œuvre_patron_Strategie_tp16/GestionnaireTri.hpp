#ifndef GESTIONNAIRE_TRI_HPP
#define GESTIONNAIRE_TRI_HPP

#include <vector>
#include <string>
#include "StrategieTri.hpp"

class GestionnaireTri {
private:
	StrategieTri *strategie; // Pointeur vers la strategie

public:
	// Constructeur
	GestionnaireTri(StrategieTri *strat);

	// Modifier la strategie dynamiquement à l'exécution
	void setStrategie(StrategieTri *strat);

	// Execute le tri
	void executerTri(std::vector<std::string> &donnees) const;
};

#endif
