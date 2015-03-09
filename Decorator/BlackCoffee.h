#pragma once

#include "Coffee.h"

class BlackCoffee: public Coffee 
{
public:
	virtual double getCost();
	virtual std::string getIngredients();
};
