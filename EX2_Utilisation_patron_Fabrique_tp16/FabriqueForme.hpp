#ifndef FABRIQUE_FORME_HPP
#define FABRIQUE_FORME_HPP

#include <string>
#include "Forme.hpp"

class FabriqueForme {
public:
	// Methode statique qui cree et retourne une forme en fonction d'un parametre textuel
	static Forme* creerForme(const std::string &type);
};

#endif
