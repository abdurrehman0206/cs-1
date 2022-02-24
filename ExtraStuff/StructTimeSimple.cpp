#include <iostream>

using namespace std;

struct Time
{

    int hours;
    int minutes;
    int seconds;
};

void input_time(Time &);
void correct_time(Time &);
void output_time(Time &);
Time cal(Time &, Time &);

int main()
{
    Time t1;
    input_time(t1);
    output_time(t1);

    system("pause");
    return 0;
}

void input_time(Time &t)
{
    cout << "Enter hours :: ";
    cin >> t.hours;
    cout << "Enter Minutes :: ";
    cin >> t.minutes;
    cout << "Enter Seconds :: ";
    cin >> t.seconds;
    correct_time(t);
}

void correct_time(Time &t)
{
    while (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    while (t.minutes >= 60)
    {
        t.minutes -= 60;
        t.hours++;
    }
}

void output_time(Time &t)
{
    cout << t.hours << " : " << t.minutes << " : " << t.seconds << endl;
}
