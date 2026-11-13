#include "GestionnaireTri.hpp"

GestionnaireTri::GestionnaireTri(StrategieTri *strat) :
		strategie(strat) {
}

void GestionnaireTri::setStrategie(StrategieTri *strat) {
	strategie = strat;
}

void GestionnaireTri::executerTri(std::vector<std::string> &donnees) const {
	if (strategie != nullptr) {
		strategie->trier(donnees);
	}
}
