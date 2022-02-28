#include <iostream>

using namespace std;

struct Time
{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
};

struct dis
{
    unsigned int feet;
    float inches;
};

void input_dis(dis &);
void correct_dis(dis &);
void output_dis(dis &);
void input_time(Time &);
void correct_time(Time &);
void output_time(Time &);
Time add(Time &, Time &);
Time cal(dis &, dis &, Time &);

int main()
{
    Time t1, t2, t3, t4;
    dis d1, d2, d3;
    d3 = {1, 1};

    cout << "_Enter Current Time_" << endl;
    input_time(t1);
    cout << endl
         << "_Enter Distance to the spot_" << endl;
    input_dis(d1);
    cout << endl
         << "_Enter Step Size_" << endl;
    input_dis(d2);
    cout << endl
         << "_Enter Step Time_" << endl;
    input_time(t2);
    t3 = cal(d1, d2, t2);
    t4 = add(t1, t3);
    cout << endl
         << "Current Time > ";
    output_time(t1);
    cout << "Est Destination Time > ";
    output_time(t4);
    cout << "Time Required > ";
    output_time(t3);

    system("pause");
    return 0;
}

void input_dis(dis &d)
{

    cout << "Enter distance in Feet :: ";
    cin >> d.feet;
    cout << "Enter distance in Inches :: ";
    cin >> d.inches;
    correct_dis(d);
}

void correct_dis(dis &d)
{
    while (d.inches >= 12)
    {
        d.inches -= 12;
        d.feet++;
    }
    while (d.inches < 0)
    {
        d.inches += 12;
        d.feet--;
    }
}

void output_dis(dis &d)
{
    cout << d.feet << "\'"
         << "-" << d.inches << "\''" << endl
         << endl;
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
    cout << t.hours << " : " << t.minutes << " : " << t.seconds << endl
         << endl;
}
Time cal(dis &da, dis &db, Time &t)
{
    int steps = 0;
    dis d, da_temp;
    da_temp = da;
    Time temp_time = {0, 0, 0};
    Time temp_t = t;
    while (true)
    {
        if (da_temp.feet > 0)
        {
            da_temp.feet -= db.feet;
        }
        if (da_temp.inches > 0)
        {
            da_temp.inches -= db.inches;
        }
        if (da_temp.feet <= 0 && da_temp.inches <= 0)
        {
            break;
        }
        steps++;
    }
    cout << endl
         << "Number of Steps Required :: " << steps << endl;
    while (steps >= 0)
    {
        temp_time.hours += temp_t.hours;
        temp_time.minutes += temp_t.minutes;
        temp_time.seconds += temp_t.seconds;

        steps--;
    }
    correct_time(temp_time);
    return temp_time;
}

Time add(Time &ta, Time &tb)
{
    Time t;
    t.hours = tb.hours + ta.hours;
    t.minutes = tb.minutes + ta.minutes;
    t.seconds = tb.seconds + ta.seconds;
    correct_time(t);
    return t;
}
