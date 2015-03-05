#pragma once

#include "Engine.h"

class Hybrid : public Engine {
	
public:
	enum Mode {MODE_ELECTRIC, MODE_GAS};
	Hybrid();
	void start();
	void stop();
	bool isCharged();
	void charge();
	double getCharge();
	Mode mode();
	
private:
	std::thread *runner;
	Mode currentMode;
	double currentCharge;
	void go();
	void setCharge(double newCharge);
};
