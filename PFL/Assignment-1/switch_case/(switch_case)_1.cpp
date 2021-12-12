#include <iostream>
using namespace std;

int main()
{
    char op;
    float a, b;
    cout << "Enter an operator (+,-,*,/):: ";
    cin >> op;
    cout << "Enter 1st Number :: ";
    cin >> a;
    cout << "Enter 2nd Number :: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Sum :: " << a + b << endl;
        break;
    case '-':
        cout << "Difference [a-b] :: " << a - b << endl;
        cout << "Difference [b-a] :: " << b - a << endl;
        break;
    case '*':
        cout << "Product :: " << a * b << endl;
        break;
    case '/':
        cout << "Division [a/b] :: " << a / b << endl;
        cout << "Division [b/a] :: " << b / a << endl;
        break;
    default:
        cout << "Enter Correct Operator!";
        break;
    }

    system("pause");
    return 0;
}