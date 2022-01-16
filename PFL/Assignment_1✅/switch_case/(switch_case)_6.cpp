#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter any number :: ";
    cin >> a;

    switch (a % 2)
    {
    case 0:
        cout << "Number is Even" << endl;
        break;
    case 1:
        cout << "Number is Odd" << endl;
        break;
    default:
        cout << "Enter a valid number!" << endl;
        break;
    }
    system("pause");
    return 0;
}