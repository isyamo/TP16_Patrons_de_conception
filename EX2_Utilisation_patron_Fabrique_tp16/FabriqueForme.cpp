#include "FabriqueForme.hpp"

Forme* FabriqueForme::creerForme(const std::string &type) {
	if (type == "cercle") {
		return new Cercle();
	} else if (type == "carre") {
		return new Carre();
	} else if (type == "triangle") {
		return new Triangle();
	} else {
		return nullptr;
	}
}
