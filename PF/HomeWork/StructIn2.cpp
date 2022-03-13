#include <iostream>

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

    void i_stud();
    void correct();
    void o_stud();
    void to12();
};

void sort(Student[], int);
void swap(Student &, Student &);

int main()
{
    Student s[10];

    cout << "_Input[24H]_" << endl;
    for (int i = 0; i < 10; i++)
    {
        s[i].i_stud();
    }
    cout << "_Output_" << endl;
    for (int i = 0; i < 10; i++)
    {
        s[i].o_stud();
    }
    cout << "_Sorted_" << endl;
    sort(s, 10);
    for (int i = 0; i < 10; i++)
    {
        s[i].o_stud();
    }
    system("pause");

    return 0;
}

void Student::i_stud()
{

    cout << "Enter Student's name :: ";
    getline(cin, name);
    cout << "_" << name << "'s arrival time_" << endl;
    do
    {
        cout << "  > Enter Hours :: ";
        cin >> t.hours;
    } while (t.hours >= 24);

    cout << "  > Enter Minutes :: ";
    cin >> t.minutes;
    cout << "  > Enter Seconds :: ";
    cin >> t.seconds;
    correct();
    cout << endl;
    cin.ignore();
}
void Student::correct()
{
    while (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes += 1;
    }
    while (t.minutes >= 60)
    {
        t.minutes -= 60;
        t.hours += 1;
    }
    while (t.hours >= 24)
    {
        t.hours -= 24;
    }
}

void Student::o_stud()
{
    cout << name << "\t\t" << t.hours << ":" << t.minutes << ":" << t.seconds << " " << t.md << endl;
}

void Student::to12()
{
    if (t.hours == 12)
    {
        t.md = "pm";
    }
    else if (t.hours == 0)
    {
        t.hours = 12;
        t.md = "am";
    }
    else if (t.hours > 12)
    {
        t.hours -= 12;
        t.md = "pm";
    }
    else
    {
        t.md = "am";
    }
}

void sort(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (s[j].t.hours < s[i].t.hours)
            {
                swap(s[i], s[j]);
            }
        }
    }
    int f_hour;
    for (int i = 0; i < n; i++)
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
    for (int i = 0; i < n; i++)
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
    for (int i = 0; i < n; i++)
    {
        s[i].to12();
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
