#ifndef TIMEOFDAY_H_INCLUDED
#define TIMEOFDAY_H_INCLUDED
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
#endif
