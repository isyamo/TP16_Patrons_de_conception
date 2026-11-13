#ifndef AFFICHAGES_HPP
#define AFFICHAGES_HPP

#include <iostream>
#include "Observateur.hpp"

// Affichage  pour la température
class AffichageTemperature: public Observateur {
public:
	void mettreAJour(float temperature, float, float) override {
		std::cout << "\n Affichage Température  -> Nouvelle température : "
				<< temperature << " °C" << std::endl;
	}
};

// Affichage pour l'humidité
class AffichageHumidite: public Observateur {
public:
	void mettreAJour(float, float humidite, float) override {
		std::cout << "\n Affichage Humidité  -> Nouvelle humidité : "
				<< humidite << " %" << std::endl;
	}
};

#endif
