#include <iostream>
using namespace std;

int main()
{

    float a, b;
    char sign;

    cout << "enter 1st number :: ";
    cin >> a;
    cout << "enter 2nd number :: ";
    cin >> b;
    cout << "Enter Sign :: ";
    cin >> sign;

    if (sign == '+' || sign == '-' || sign == '*' || sign == '/')
    {
        switch (sign)
        {
        case '+':
            cout << "Sum :: " << a + b << endl;
            break;
        case '-':
            cout << "Diff [a-b] :: " << a - b << endl;
            cout << "Diff [b-a] :: " << b - a << endl;
            break;
        case '*':
            cout << "Pro  :: " << a * b << endl;
            break;
        case '/':
            cout << "Div [a/b] :: " << a / b << endl;
            cout << "Div [b/a] :: " << b / a << endl;
            break;
        }
    }
    else
    {
        cout << "Invalid Sign!" << endl;
    }

    system("pause");
    return 0;
}