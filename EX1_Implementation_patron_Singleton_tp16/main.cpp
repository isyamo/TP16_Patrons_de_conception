#include <iostream>
#include "Configuration.hpp"

int main() {
	std::cout << "\n <<< Debut du programme >>> \n" << std::endl;

	// On recupere une premiere fois l'instance
	Configuration &config1 = Configuration::getInstance();
	config1.afficherParametres();

	// Modifie les parametres via config1
	config1.setParametres("/var/data/settings.json", "super_user", "Pass987*");

	// On récupère l'instance une 2 eme  fois dans une autre variable
	Configuration &config2 = Configuration::getInstance();

	std::cout
			<< " Apres modification, affichage depuis la seconde reference : "
			<< std::endl;
	config2.afficherParametres();

	return 0;
}
