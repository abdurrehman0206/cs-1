//Grades 
#include <iostream>
using namespace std;

int main()
{

    float marks;
    cout << "Enter your marks (Out of 100) :: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }

    system("pause");
    return 0;
}