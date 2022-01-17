#include <iostream>

using namespace std;

int main()
{
    int num1, num2, opt = 0;
    char op;

    do
    {
        system("CLS");
        cout << "1-->Addition" << endl;
        cout << "2-->Subtraction" << endl;
        cout << "3-->Multiplication" << endl;
        cout << "4-->Division" << endl;
        cout << "5-->Remainder" << endl;
        cout << "Enter Option :: ";
        cin >> opt;

        cout << "Enter 1st Number :: ";
        cin >> num1;
        cout << "Enter 2nd Number :: ";
        cin >> num2;

        switch (opt)
        {
        case 1:
            cout << "Sum [a+b] = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Difference [a-b] = " << num1 - num2 << endl;
            cout << "Difference [b-a] = " << num2 - num1 << endl;
            break;
        case 3:
            cout << "Product [a*b] = " << num1 * num2 << endl;
            break;
        case 4:
            if (num1 == 0 && num2 == 0)
            {
                cout << "Result [a/b] = UNDEFINED" << endl;
                cout << "Result [b/a] = UNDEFINED" << endl;
            }
            else if (num1 == 0 && num2 != 0)
            {
                cout << "Result [a/b] = " << num1 / num2 << endl;
                cout << "Result [b/a] = UNDEFINED" << endl;
            }
            else if (num2 == 0 && num1 != 0)
            {
                cout << "Result [a/b] = UNDEFINED" << endl;
                cout << "Result [b/a] = " << num2 / num1 << endl;
            }
            else
            {
                cout << "Result [a/b] = " << num1 / num2 << endl;
                cout << "Result [b/a] = " << num2 / num1 << endl;
            }
            break;

        case 5:
            if (num1 == 0 && num2 == 0)
            {
                cout << "Remainder [a%b] = UNDEFINED" << endl;
                cout << "Remainder [b%a] = UNDEFINED" << endl;
            }
            else if (num1 == 0 && num2 != 0)
            {
                cout << "Remainder [a/b] = " << num1 % num2 << endl;
                cout << "Remainder [b/a] = UNDEFINED" << endl;
            }
            else if (num2 == 0 && num1 != 0)
            {
                cout << "Remainder [a/b] = UNDEFINED" << endl;
                cout << "Remainder [b/a] = " << num2 % num1 << endl;
            }
            else
            {
                cout << "Remainder [a/b] = " << num1 / num2 << endl;
                cout << "Remainder [b/a] = " << num2 / num1 << endl;
            }

            break;
        default:
            cout << "Option does not exist!!!!" << endl;
            break;
        }

        cout << endl
             << "Do you wish to continue.....? [Y|y] : ";
        cin >> op;

    } while (op == 'Y' || op == 'y');

    system("pause");
    return 0;
}