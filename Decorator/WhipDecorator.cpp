#include "WhipDecorator.h"

/*Decorator for adding whip cream to coffee*/
WhipDecorator::WhipDecorator (Coffee *baseCoffee): baseCoffee(baseCoffee) {};

double WhipDecorator::getCost()
{
	return baseCoffee->getCost() + 0.7;
}

std::string WhipDecorator::getIngredients()
{
	return baseCoffee->getIngredients() + ", " + "Whip";
}
