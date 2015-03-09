#include "stdafx.h"
#include "MilkDecorator.h"

/*Decorator that adds milk to the coffee*/

MilkDecorator::MilkDecorator (Coffee *baseCoffee): baseCoffee(baseCoffee) {};
	
double MilkDecorator::getCost()
{
	return baseCoffee->getCost() + 0.5;
}
std::string MilkDecorator::getIngredients()
{
	return baseCoffee->getIngredients() + ", " + "Milk";
}
