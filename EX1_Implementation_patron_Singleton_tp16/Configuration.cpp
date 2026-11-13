#include <iostream>
#include "Configuration.hpp"

// Constructeur privé
Configuration::Configuration() {
	cheminFichier = "/etc/config.ini";
	utilisateur = "admin_root";
	motDePasse = "Securise123!";
	std::cout << "\n Instance de Configuration creee.\n";
}

// Destructeur
Configuration::~Configuration() {
	std::cout << "\n Instance de Configuration detruite.\n";
}

Configuration& Configuration::getInstance() {
	static Configuration instance;
	return instance;
}

// Methode pour afficher les paramètres
void Configuration::afficherParametres() const {
	std::cout << "\n <<<  PARAMETRES DE CONFIGURATION >>> " << std::endl;
	std::cout << "\n Chemin du fichier : " << cheminFichier << std::endl;
	std::cout << "\n Utilisateur       : " << utilisateur << std::endl;
	std::cout << "\n Mot de passe      : " << motDePasse << std::endl;
	std::cout << "\n <<<<<<<<<<<<<<<<<<  >>>>>>>>>>>>>>>>>>>\n" << std::endl;
}

// Modification des paramètres
void Configuration::setParametres(const std::string &chemin,
		const std::string &user, const std::string &mdp) {
	cheminFichier = chemin;
	utilisateur = user;
	motDePasse = mdp;
}
