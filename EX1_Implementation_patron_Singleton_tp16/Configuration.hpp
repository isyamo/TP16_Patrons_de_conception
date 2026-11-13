#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <string>

class Configuration {
private:
	// Attributs de configuration
	std::string cheminFichier;
	std::string utilisateur;
	std::string motDePasse;

	// Constructeur privé pour empêcher l'instanciation directe
	Configuration();

	// Destructeur privé
	~Configuration();

public:
	// Suppression du constructeur de copie et de l'operateur d'affectation pour eviter les doublons
	Configuration(const Configuration&) = delete;
	Configuration& operator=(const Configuration&) = delete;

	static Configuration& getInstance();

	void afficherParametres() const;

	// Methodes pour modifier les paramètres
	void setParametres(const std::string &chemin, const std::string &user,
			const std::string &mdp);
};

#endif
