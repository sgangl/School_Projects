#include "stdafx.h"
#include "Gas.h"
#include "util.h"

using namespace std;

Gas::Gas()
	: Engine() 
{
	runner = NULL;
}

void Gas::start() {
	if (runner == NULL) {
		runner = new std::thread(&Gas::go, this);
	}
}

void Gas::go() {
	for (;;) {
		cout << "Vroom" << endl;
		SleepSeconds(1.0);
	}
}
