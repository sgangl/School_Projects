#include "stdafx.h"
#include "BigCat.h"

using namespace std;

BigCat::BigCat(const int& nuWeight, const string& nuVoice, const string& nuName, const Species& nuSpecies, const bool& nuCaptivity)
		: Cat()
{
	setWeight(nuWeight);
	setVocalization(nuVoice);
	setName(nuName);
	currentSpecies = nuSpecies;
	isInCaptivity = nuCaptivity;
}

BigCat::Species BigCat::getSpecies()
{
	return currentSpecies;
}

bool BigCat::getCaptivity()
{
	return isInCaptivity;
}

void BigCat::setSpecies(const Species& nuSpecies)
{
	currentSpecies = nuSpecies;
}

void BigCat::setCaptivity(const bool& nuCaptivity)
{
	isInCaptivity = nuCaptivity;
}

void BigCat::printCat()
{
	cout << "Name: " << getName() << endl;
	cout << getName() << " weighs: " << getWeight() << " pounds." << endl;
	cout << getName() << " is a: ";
	if (currentSpecies == LION) cout << "LION" << endl;
	else if (currentSpecies == TIGER) cout << "TIGER" << endl;
	else cout << "PUMA" << endl;
	cout << getName() << " is currently ";
	if (isInCaptivity) cout << "in captivity." << endl;
	else cout << "not in captivity." << endl;
	cout << getName() << " says: " << getVocalization() << endl;
}
