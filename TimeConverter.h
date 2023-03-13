#include <iostream>
#include <string>
#include <chrono>
#include <sstream>
#include <iomanip>

using namespace std;

class TimeConverter
{
public:
    string getCurrentTime()
    {
        time_t ttime = time(0);
        tm *local_time = localtime(&ttime);
        int hour = local_time->tm_hour;
        int min = local_time->tm_min;
        int sec = local_time->tm_sec;
        string ampm;
        if (hour < 12)
        {
            ampm = "AM";
        }
        else
        {
            ampm = "PM";
            hour = hour - 12;
        }
        stringstream clock;
        clock << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << "   " << ampm;
        return clock.str();
    }
};