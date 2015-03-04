#pragma once

#include "Cat.h"

class BigCat : public Cat
{
public:
	enum Species {LION, TIGER, PUMA};
	Species currentSpecies;
	BigCat(const int& nuWeight, const std::string& nuVoice, const std::string& nuName, const Species& nuSpecies, const bool& nuCaptivity);
	Species getSpecies();
	bool getCaptivity();
	void setSpecies(const Species& nuSpecies);
	void setCaptivity(const bool& nuCaptivity);
	void printCat();
private:
	bool isInCaptivity;
};
