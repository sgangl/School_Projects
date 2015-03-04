#pragma once

#include "Engine.h"

class Gas : public Engine {
public:
	Gas();
	void start();
private:
	std::thread *runner;
	void go();
};
