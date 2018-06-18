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

    switch()
}
