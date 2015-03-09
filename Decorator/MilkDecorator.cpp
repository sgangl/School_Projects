#include "stdafx.h"
#include "Coffee.cpp"

/*Decorator that adds milk to the coffee*/
class MilkDecorator: public Coffee
{
public:
	MilkDecorator (Coffee *baseCoffee): baseCoffee(baseCoffee) {};
	
	virtual double getCost()
	{
		return baseCoffee->getCost() + 0.5;
	}
	
	virtual std::string getIngredients()
	{
		return baseCoffee->getIngredients() + ", " + "Milk";
	}
	
private:
	Coffee *baseCoffee;
};
