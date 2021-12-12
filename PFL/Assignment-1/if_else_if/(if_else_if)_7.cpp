#include <iostream>
using namespace std;

int main()
{

    char data;
    cout << "Enter anything :: ";
    cin >> data;

    if ((data >= 'a' && data <= 'z') || (data >= 'A' && data <= 'Z'))
    {
        cout << "You have entered an alphabet!" << endl;
    }
    else if ((data >= '0' && data <= '9'))
    {
        cout << "You have entered a number!" << endl;
    }
    else
    {
        cout << "You have entered special charachters or Brackets!" << endl;
    }

    system("pause");
    return 0;
}