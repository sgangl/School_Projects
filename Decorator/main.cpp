/*
 *This program demonstrates an implementation of the Decorator Design Pattern
 * Written for CSCI 375: Object Oriented Design
 * Sean Gangle, 09 March 2015
 */

#include "stdafx.h"
#include "Coffee.cpp"
#include "BlackCoffee.cpp"
#include "MilkDecorator.cpp"
#include "WhipDecorator.cpp"

using namespace std;

int main(int argc, char *argv[])
{
	BlackCoffee black;
	cout << "Black Coffee...not fancy at all!" << endl;
	cout << "COST: " << black.getCost() << " | INGREDIENTS: " << black.getIngredients() << endl;
	cout << endl;
	
	MilkDecorator milk(&black);
	cout << "Coffee with milk...semi-fancy!" << endl;
	cout << "COST: " << milk.getCost() << " | INGREDIENTS: " << milk.getIngredients() << endl;
	cout << endl;
	
	WhipDecorator whip(&black);
	cout << "Coffee with whip cream...getting pretty fancy!" << endl;
	cout << "COST: " << whip.getCost() << " | INGREDIENTS: " << whip.getIngredients() << endl;
	cout << endl;
	
	MilkDecorator milkAndWhip(&whip);
	cout << "Coffee with whip AND milk...holy cow, it's so fancy!" << endl;
	cout << "COST: " << milkAndWhip.getCost() << " | INGREDIENTS: " << milkAndWhip.getIngredients() << endl;
	cout << endl;
}
