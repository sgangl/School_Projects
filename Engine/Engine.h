#pragma once

class Engine {
public:
	Engine();
	void setSpeed(double newSpeed);
	double getSpeed();
	double getPosition();
	virtual void start() = 0;
private:
	double position;
	double speed;
	std::string manufacturer;
};
