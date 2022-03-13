#include <iostream>
#include <iomanip>

using namespace std;

struct Time
{
    unsigned short hours, minutes, seconds;
    string md = "";
};

struct Student
{
    string name;
    Time t;
};

void i_stud(Student[]);
void correct(Student &);
void o_stud(Student s[]);
void sort(Student[]);
void swap(Student &, Student &);
void to12(Student &);

int main()
{
    Student s[10];
    cout << "_Input[24H Format]_" << endl;
    i_stud(s);

    cout << "_Output_" << endl;
    o_stud(s);

    cout << "_Output Sorted_" << endl;
    sort(s);
    o_stud(s);

    system("pause");

    return 0;
}

void i_stud(Student s[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Student " << i + 1 << "'s name :: ";
        getline(cin, s[i].name);
        cout << "_" << s[i].name << "'s arrival time_" << endl;
        do
        {
            cout << "  > Enter Hours :: ";
            cin >> s[i].t.hours;
        } while (s[i].t.hours >= 24);

        cout << "  > Enter Minutes :: ";
        cin >> s[i].t.minutes;
        cout << "  > Enter Seconds :: ";
        cin >> s[i].t.seconds;
        correct(s[i]);
        cin.ignore();
        cout << endl;
    }
    cout << endl;
}
void correct(Student &s)
{

    while (s.t.seconds >= 60)
    {
        s.t.seconds -= 60;
        s.t.minutes += 1;
    }
    while (s.t.minutes >= 60)
    {
        s.t.minutes -= 60;
        s.t.hours += 1;
    }
    while (s.t.hours != 24)
    {
        s.t.hours -= 24;
    }
}

void o_stud(Student s[])
{
    cout << "Name\t\tTime" << endl;
    for (int i = 0; i < 3; i++)
    {

        cout << s[i].name << "\t\t" << s[i].t.hours << ":" << s[i].t.minutes << ":" << s[i].t.seconds << " " << s[i].t.md << endl;
    }
    cout << endl;
}

void sort(Student s[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (s[j].t.hours < s[i].t.hours)
            {
                swap(s[i], s[j]);
            }
        }
    }
    int f_hour;
    for (int i = 0; i < 3; i++)
    {
        f_hour = s[i].t.hours;
        for (int j = i; s[j].t.hours == f_hour; j++)
        {
            if (s[j].t.minutes < s[i].t.minutes)
            {
                swap(s[i], s[j]);
            }
        }
    }
    int f_min;
    for (int i = 0; i < 3; i++)
    {
        f_min = s[i].t.minutes;
        for (int j = i; s[j].t.minutes == f_min; j++)
        {
            if (s[j].t.seconds < s[i].t.seconds)
            {
                swap(s[i], s[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        to12(s[i]);
    }
    cout << endl;
}

void swap(Student &a, Student &b)
{
    Student temp;
    temp = a;
    a = b;
    b = temp;
}

void to12(Student &s)
{
    if (s.t.hours == 12)
    {
        s.t.md = "pm";
    }
    else if (s.t.hours == 0)
    {
        s.t.hours = 12;
        s.t.md = "am";
    }
    else if (s.t.hours > 12)
    {
        s.t.hours -= 12;
        s.t.md = "pm";
    }
    else
    {
        s.t.md = "am";
    }
}