#include "stdafx.h"
#include "Cat.h"

using namespace std;

Cat::Cat() 
{
	weight = -1;
	vocalization = "UNSET";
	name = "NO_NAME";
}

void Cat::printCat() 
{}

int Cat::getWeight()
{
	return weight;
}


string Cat::getVocalization()
{
	return vocalization;
}

string Cat::getName()
{
	return name;
}

void Cat::setName(const string& nuName)
{
	name = nuName;
}

void Cat::setWeight(const int& nuWeight)
{
	weight = nuWeight;
}

void Cat::setVocalization(const string& nuVoice)
{
	vocalization = nuVoice;
}
