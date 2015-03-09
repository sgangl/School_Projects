#include "stdafx.h"
#include "Coffee.cpp"

/*Simple class of coffee with no other ingredients*/
class BlackCoffee: public Coffee 
{
public:
	virtual double getCost()
	{
		return 1.0;
	}
	
	virtual std::string getIngredients()
	{
		return "Coffee";
	}
};
