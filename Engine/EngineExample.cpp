#include "stdafx.h"
#include "util.h"
#include "Engine.h"
#include "Hybrid.h"
#include "Gas.h"

using namespace std;

void test (Engine &engine) {
	engine.setSpeed(0);
	assert(engine.getSpeed() == 0);
	engine.setSpeed(1);
	assert(engine.getSpeed() == 1);
}

void testHybrid (Hybrid &hybrid) {
	while (!hybrid.isCharged()) hybrid.charge();
	hybrid.start();
	assert(hybrid.mode() == Hybrid::MODE_ELECTRIC);
	hybrid.setSpeed(1);
	double charge0 = hybrid.getCharge();
	SleepSeconds(1.0);
	double charge1 = hybrid.getCharge();
	assert(charge1 < charge0);	
}

int main (int argc, char *argv[]) {
	//Engine plain;
	//test(plain);
	
	Hybrid hybrid;
	test(hybrid);
	
	Gas gas;
	test(gas);
	
	testHybrid(hybrid);
	
	return 0;
}
