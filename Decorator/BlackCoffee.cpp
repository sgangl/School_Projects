#include "stdafx.h"
#include "BlackCoffee.h"

/*Simple class of coffee with no other ingredients*/
double BlackCoffee::getCost()
{
	return 1.0;
}

std::string BlackCoffee::getIngredients()
{
	return "Coffee";
}
