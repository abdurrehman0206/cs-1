/*Write a Program that inputs two numbers and passes these numbers to a 
function. The function displays the result of first number raise to the power 
of second number*/

#include <iostream>

using namespace std;

void power(int, int);

int main()
{
    int base, pow;
    cout << "Enter base followed by power :: " << endl;
    cin >> base >> pow;
    power(base, pow);
    system("pause");
    return 0;
}

void power(int a, int b)
{
    int res = 1;
    for (int i = 1; i <= b; i++)
    {
        res *= a;
    }
    cout << a << "^" << b << " = " << res << endl;
}