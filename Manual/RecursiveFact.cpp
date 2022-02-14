/* Write C++ Program to input a number from the user and find the factorial of 
a number using Recursive Function */

#include <iostream>

using namespace std;

int factorial(int);

int main()
{
    int num;
    cout << "Enter a number :: ";
    cin >> num;
    cout << "Factorial = " << factorial(num) << endl;

    system("pause");
    return 0;
}

int factorial(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}