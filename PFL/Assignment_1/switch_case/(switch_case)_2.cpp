#include <iostream>
using namespace std;

int main()
{
    char age;
    cout << "a => 12 - 18 " << endl;
    cout << "b => 19 - 24 " << endl;
    cout << "c => 25 - 32 " << endl;
    cout << "d => 32+" << endl
         << endl;
    cout << "Enter your age letter (a,b,c,d)::";
    cin >> age;

    cout << "Bus Ticket Price :: ";
    switch (age)
    {
    case 'a':
    case 'A':
        cout << "$10" << endl;
        cout << "Category :: HighSchool Student" << endl;
        break;
    case 'b':
    case 'B':
        cout << "$15" << endl;
        cout << "Category :: University Student" << endl;
        break;
    case 'c':
    case 'C':
        cout << "$20" << endl;
        cout << "Category :: Working Class" << endl;
        break;
    case 'd':
    case 'D':
        cout << "$25" << endl;
        cout << "Category :: Elder" << endl;
        break;

    default:
        cout << "Invalid entry!" << endl;
        break;
    }

    system("pause");
    return 0;
}