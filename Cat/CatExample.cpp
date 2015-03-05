#include "stdafx.h"
#include "Cat.h"
#include "HouseCat.h"
#include "BigCat.h"

using namespace std;

int main(int argc, char *argv[])
{
	HouseCat tabbyCat("Toby", 10, "Meow!", "White", false);
	BigCat tigerCat(300, "ROAR!", "Killer", BigCat::TIGER, true);
	
	tabbyCat.printCat();
	cout << endl;
	
	tigerCat.printCat();
}
