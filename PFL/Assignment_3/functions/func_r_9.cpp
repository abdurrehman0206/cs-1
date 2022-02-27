#include <iostream>

using namespace std;

int SGPA(float);

int main()
{
    float marks;
    float avg;
    int grade;
    cout << "Enter Marks :: ";
    cin >> marks;
    avg = marks * 100 / 500;
    cout << "Grade :: " << SGPA(avg) << endl;
    system("pause");
    return 0;
}

int SGPA(float avg)
{

    if (avg >= 90 && avg <= 100)
    {
        return 4;
    }
    else if (avg >= 70 && avg <= 89)
    {
        return 3;
    }
    else if (avg >= 50 && avg <= 69)
    {
        return 2;
    }
    else if (avg >= 40 && avg <= 49)
    {
        return 1;
    }
    else if (avg >= 0 && avg <= 39)
    {
        return 0;
    }
    else
    {
        cout << "Error!" << endl;
    }
}