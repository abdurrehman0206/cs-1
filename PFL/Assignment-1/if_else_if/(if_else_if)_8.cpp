#include <iostream>
using namespace std;

int main()
{

    char data;
    cout << "Enter anything :: ";
    cin >> data;

    if (data >= 'a' && data <= 'z')
    {
        cout << "You have entered lowercase alphabet!" << endl;
    }
    else if (data >= 'A' && data <= 'Z')
    {
        cout << "You have entered uppercase alphabet!" << endl;
    }
    else
    {
        cout << "You have entered a number or other charachters!" << endl;
    }

    system("pause");
    return 0;
}