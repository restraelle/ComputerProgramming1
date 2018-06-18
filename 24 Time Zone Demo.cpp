#include <iostream>
#include <string>

using namespace std;

enum TimeZones {EASTERN, CENTRAL, MOUNTAIN, PACIFIC};

TimeZones GetZone();
void PrintZone(TimeZones zone);
void PrintZone(TimeZones zone, long time);
int DecrementTime(int);
int GetTime();

int main() {
    TimeZones zone;
    long time;
    time = GetTime();
    zone = GetZone();

    switch(zone) {
        case PACIFIC:
            time = DecrementTime(time);
        case MOUNTAIN:
            time = DecrementTime(time);
        case CENTRAL:
            time = DecrementTime(time);
        case EASTERN:
            break;
    }

    PrintTime(zone, time);
    return 0;
}

int DecrementTime(int time) {
    return time - 3600;
}

