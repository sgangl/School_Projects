#pragma once

#include "stdafx.h"
#include "Coffee.h"

/*Decorator for adding whip cream to coffee*/
class WhipDecorator: public Coffee
{
public:
	WhipDecorator (Coffee *baseCoffee);	
	virtual double getCost();	
	virtual std::string getIngredients();
	
private:
	Coffee *baseCoffee;
};
