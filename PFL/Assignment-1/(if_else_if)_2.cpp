#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char sign;
    cout << "Enter 1st Number :: ";
    cin >> a;
    cout << "Enter 2nd Number :: ";
    cin >> b;
    cout << "Operation [+,-,*,/] :: ";
    cin >> sign;

    if (sign == '+' || sign == '-' || sign == '*' || sign == '/')
    {
        if (sign == '+')
        {
            cout << "Sum :: " << a + b << endl;
        }
        else if (sign == '-')
        {
            cout << "Difference [a-b] :: " << a - b << endl;
            cout << "Difference [b-a] :: " << b - a << endl;
        }
        else if (sign == '*')
        {
            cout << "Product :: " << a * b << endl;
        }
        else if (sign == '/')
        {
            cout << "Division [a/b] :: " << a / b << endl;
            cout << "Division [b/a] :: " << b / a << endl;
        }
        else
        {
            cout << "Technical Issues!" << endl;
        }
    }
    else
    {
        cout << "Enter Valid Operation!" << endl;
    }

    system("pause");
    return 0;
}