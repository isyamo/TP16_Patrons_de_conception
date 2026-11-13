#ifndef STRATEGIE_TRI_HPP
#define STRATEGIE_TRI_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Interface
class StrategieTri {
public:
	virtual ~StrategieTri() {
	}
	virtual void trier(std::vector<std::string> &donnees) = 0;
};

//  Tri croissant
class TriCroissant: public StrategieTri {
public:
	void trier(std::vector<std::string> &donnees) override {
		std::sort(donnees.begin(), donnees.end());
	}
};

// Tri decroissant
class TriDecroissant: public StrategieTri {
public:
	void trier(std::vector<std::string> &donnees) override {
		std::sort(donnees.begin(), donnees.end(), std::greater<std::string>());
	}
};

// Tri par longueur des chaines
class TriParLongueur: public StrategieTri {
public:
	void trier(std::vector<std::string> &donnees) override {
		std::sort(donnees.begin(), donnees.end(),
				[](const std::string &a, const std::string &b) {
					if (a.length() == b.length())
						return a < b;
					return a.length() < b.length();
				});
	}
};

#endif
