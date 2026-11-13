#ifndef STATION_METEO_HPP
#define STATION_METEO_HPP

#include <vector>
#include "Observateur.hpp"

class StationMeteo {
private:
	std::vector<Observateur*> observateurs; // Liste des abonnes
	float temperature;
	float humidite;
	float pression;

public:
	StationMeteo();

	void attacher(Observateur *obs);
	void detacher(Observateur *obs);
	void notifier() const;

	void setMesures(float temp, float hum, float pres);
};

#endif
