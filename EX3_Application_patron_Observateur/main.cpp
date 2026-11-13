#include <iostream>
#include "StationMeteo.hpp"
#include "Affichages.hpp"

int main() {
	std::cout << "\n <<< TEST DU PATRON OBSERVATEUR >>> " << std::endl;

	// Creation de la station meteo
	StationMeteo station;

	// Creation des ecrans d'affichage
	AffichageTemperature affTemp;
	AffichageHumidite affHum;

	// Enregistrement dynamique des observateurs
	station.attacher(&affTemp);
	station.attacher(&affHum);

	// Changement des mesures
	std::cout << "\n <<<  Premiere mise a jour >>> " << std::endl;
	station.setMesures(24.5f, 65.0f, 1013.2f);

	// Desabonnement dynamique
	std::cout << "\n <<< Desabonnement de l'affichage humidite >>> "
			<< std::endl;
	station.detacher(&affHum);

	//Nouveau changement de mesures
	std::cout << "\n <<< Deuxieme mise a jour >>> " << std::endl;
	station.setMesures(27.0f, 50.0f, 1010.0f);

	return 0;
}
