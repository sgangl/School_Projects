#pragma once

#include "Coffee.h"

/*Decorator that adds milk to the coffee*/
class MilkDecorator: public Coffee
{
public:
	MilkDecorator (Coffee *baseCoffee);	
	virtual double getCost();	
	virtual std::string getIngredients();
		
private:
	Coffee *baseCoffee;
};


