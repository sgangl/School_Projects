#include "stdafx.h"
#include "util.h"

void SleepSeconds(float seconds) {
	std::chrono::milliseconds duration(int(1000 * seconds));
	std::this_thread::sleep_for(duration);
}
