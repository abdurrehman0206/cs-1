#include <iostream>
using namespace std;

int main()
{
    float wh, wage, oh;
    cout << "Workin Days = 5" << endl;
    cout << "Total Hours = 120 hrs" << endl;
    cout << "Minimum Hours Allowed = 5" << endl;
    cout << "Max Allowed Hours Per Day = 8" << endl;
    cout << "Total Work hours = 40" << endl
         << endl;                   //8*5
    cout << "Enter work hours :: "; // 5 working days in a week
    cin >> wh;

    if (wh < 5)
    {
        cout << "Refer to administration.You are behind on hour." << endl;
    }
    else if (wh >= 5 && wh <= 40)
    {
        wage = wh * 50;
        cout << "Total Salary = " << wage << "$ .Please collect it." << endl;
    }
    else if (wh > 40 && wh <= 60)
    { //considering max 12 hours a day for work
        oh = wh - 40;
        wage = ((oh * 60) + (wh * 50));
        cout << "You have done over time!" << endl;
        cout << "Over time hours = " << oh << endl;
        cout << "OverTime Salary = " << oh * 60 << endl;
        cout << "WorkTime Salary = " << wh * 50 << endl;
        cout << "Total Salary = " << wage << "$ .Please collect it." << endl;
    }
    else
    {
        cout << "Please Enter Correct Hours!" << endl;
    }

    system("pause");
    return 0;
}