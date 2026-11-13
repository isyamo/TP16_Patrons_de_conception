#ifndef OBSERVATEUR_HPP
#define OBSERVATEUR_HPP

// Interface  pour tous les observateurs
class Observateur {
public:
	virtual ~Observateur() {
	}
	virtual void mettreAJour(float temperature, float humidite,
			float pression) = 0;
};

#endif
