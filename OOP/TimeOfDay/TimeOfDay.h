#include <iostream>
class TimeOfDay {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        TimeOfDay();
        ~TimeOfDay();

        TimeOfDay(int iHours, int iMinutes, int iSeconds);
        TimeOfDay Increment() const;
        void Write() const;
        bool Equal(TimeOfDay othertimeofday) const;
        bool LessThan(TimeOfDay othertimeofday) const;
};
