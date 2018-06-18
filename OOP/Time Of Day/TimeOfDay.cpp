#include <iostream>
#include "TimeOfDay.h"

using namespace std;

TimeOfDay::TimeOfDay() {
    hours = 0;
    minutes = 0;
    seconds = 0;
}

TimeOfDay::TimeOfDay(int iHours, int iMinutes, int iSeconds) {
    hours = iHours;
    minutes = iMinutes;
    seconds = iSeconds;
}

TimeOfDay TimeOfDay::Increment() const {
    TimeOfDay result = TimeOfDay(hours, minutes, seconds);
    result.seconds = result.seconds++;

    if(result.seconds > 59) {
        result.seconds = 0;
        result.minutes = result.minutes++;
        if(result.minutes > 59) {
            result.minutes = 0;
            result.hours = result.hours++;
            if(result.hours > 23) {
                result.hours = 0;
            }
        }
    }

    return result;
}

void TimeOfDay::Write() const {
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

bool TimeOfDay::Equal(TimeOfDay othertimeofday) const {
    return (hours == othertimeofday.hours && minutes == othertimeofday.minutes && seconds == othertimeofday.seconds);
}

TimeOfDay::~TimeOfDay() {

}
