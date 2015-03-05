#include "stdafx.h"
#include "Engine.h"

using namespace std;

Engine::Engine() {
	speed = 0;
	position = 0;
	manufacturer = "UNSET";
}

void Engine::start() {
	cout << "Engine.start( ) called." << endl;
}

void Engine::setSpeed(double newSpeed) {
	speed = newSpeed;
}

double Engine::getSpeed() {
	return speed;
}

double Engine::getPosition() {
	return position;
}
