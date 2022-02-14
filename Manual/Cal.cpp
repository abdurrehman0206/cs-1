/*Write a C++ program that inputs two number and then prompt the user to 
enter choice 1 for Add, 2 for Subtract, 3 for Multiply and 4 for Division by 
making Add(), Subtract(), Multiply() and Divide() functions. Program should
continue until the user press ‘n’;*/

#include <iostream>

using namespace std;

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    float a, b;
    char option;

    do
    {
        cout << endl;
        cout << "Enter 2 number :: ";
        cin >> a >> b;
        cout << "1-Add\n2-Subtract\n3-Multiply\n4-Divide" << endl;
        cout << "Option :: ";
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 'n':
            exit(0);
            break;
        case '1':
            cout << "Sum :: " << add(a, b);
            break;
        case '2':
            cout << "Diff :: " << subtract(a, b);
            break;
        case '3':
            cout << "Product :: " << multiply(a, b);
            break;
        case '4':
            cout << "Quotient :: " << divide(a, b);
            break;
        default:
            cout << "Unknown option" << endl;
            break;
        }
        cout << endl;
    } while (option != 'n');

    system("pause");
    return 0;
}

float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}