#include "stdafx.h"
#include "HouseCat.h"

using namespace std;

HouseCat::HouseCat(const string& nuName, const int& nuWeight, const string& nuVoice, const string& nuColor, const bool& nuIsIndoor)
		: Cat()
{
	setName(nuName);
	setWeight(nuWeight);
	setVocalization(nuVoice);
	color = nuColor;
	isIndoor = nuIsIndoor;
}

bool HouseCat::getIsIndoor()
{
	return isIndoor;
}


string HouseCat::getColor()
{
	return color;
}

void HouseCat::setIsIndoor(const bool& nuIsIndoor)
{
	isIndoor = nuIsIndoor;
}


void HouseCat::setColor(const string& nuColor)
{
	color = nuColor;
}

void HouseCat::printCat()
{
	cout << "Cat name is: " << getName() << endl;
	cout << getName() << " " << "weighs " << getWeight() << " pounds." << endl;
	cout << "Color: " << color << endl;
	if (isIndoor) cout << getName() << " is an indoor cat." << endl;
	else cout << getName() << " is an outdoor cat." << endl;
	cout << getName() << " says: " << getVocalization() << endl;
}
