#include <iostream>
#include <thread>
#include <chrono>
#include "TimeConverter.h"
#include "Display.h"

class DigitalClock
{
public:
	DigitalClock()
	{
		TimeConverter tc;
		Display display;
		while (true)
		{
			string time = tc.getCurrentTime();
			display.show(time);
			this_thread::sleep_for(chrono::milliseconds(1000));
			cout << endl;
		}
	}
};