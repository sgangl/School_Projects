#include "stdafx.h"
#include "Coffee.cpp"

/*Decorator for adding whip cream to coffee*/
class WhipDecorator: public Coffee
{
public:
	WhipDecorator (Coffee *baseCoffee): baseCoffee(baseCoffee) {};
	
	virtual double getCost()
	{
		return baseCoffee->getCost() + 0.7;
	}
	
	virtual std::string getIngredients()
	{
		return baseCoffee->getIngredients() + ", " + "Whip";
	}
	
private:
	Coffee *baseCoffee;
};
