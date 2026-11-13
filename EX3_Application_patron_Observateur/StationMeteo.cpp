#include "StationMeteo.hpp"
#include <algorithm>

StationMeteo::StationMeteo() :
		temperature(0.0f), humidite(0.0f), pression(0.0f) {
}

void StationMeteo::attacher(Observateur *obs) {
	observateurs.push_back(obs);
}

void StationMeteo::detacher(Observateur *obs) {

	observateurs.erase(
			std::remove(observateurs.begin(), observateurs.end(), obs),
			observateurs.end());
}

void StationMeteo::notifier() const {

	for (Observateur *obs : observateurs) {
		obs->mettreAJour(temperature, humidite, pression);
	}
}

void StationMeteo::setMesures(float temp, float hum, float pres) {
	temperature = temp;
	humidite = hum;
	pression = pres;
	notifier();
}
