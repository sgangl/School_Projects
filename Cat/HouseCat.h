#pragma once

#include "Cat.h"

class HouseCat : public Cat
{
public:
	HouseCat(const std::string& nuName, const int& nuWeight, const std::string& nuVoice, const std::string& color, const bool& nuIsIndoor);
	bool getIsIndoor();
	std::string getColor();
	void setIsIndoor(const bool& nuIsIndoor);
	void setColor(const std::string& nuColor);
	void printCat();
	
private:
	bool isIndoor;
	std::string color;
};
