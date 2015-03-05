#include "stdafx.h"
#include "util.h"
#include "Hybrid.h"

using namespace std;

Hybrid::Hybrid	()
	: Engine() 
{
	runner = NULL;
	currentCharge = 0;
	currentMode = MODE_GAS;
}

void Hybrid::start() {
	if (runner == NULL) {
		runner = new std::thread(&Hybrid::go, this);
	}
}

void Hybrid::setCharge(double newCharge) {
	currentCharge = newCharge;
	if(currentCharge > 0.5) {
		currentMode = MODE_ELECTRIC;
	}
	else {
		currentMode = MODE_GAS;
	}
}

void Hybrid::go() {
	for (;;) {
		SleepSeconds(0.1);
		if(getSpeed() > 0 && mode() == MODE_ELECTRIC) {
			setCharge(getCharge() - 0.1 * getSpeed());
		}
	}
}

bool Hybrid::isCharged() {
	return currentCharge == 1.0;
}

void Hybrid::charge() {
	std::chrono::milliseconds duration(100);
	std::this_thread::sleep_for(duration);
	double missingCharge = 1.0 - currentCharge;
	if(missingCharge > 0.1) {
		missingCharge = 0.1;
	}
	setCharge(getCharge() + missingCharge);
}

double Hybrid::getCharge() {
	return currentCharge;
}

Hybrid::Mode Hybrid::mode() {
	return currentMode;
}
