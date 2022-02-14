//Write a program that return value of one function as the default argument
//of another function.
#include <iostream>

using namespace std;

int input()
{
    int a;
    cout << "Enter first argument :: ";
    cin >> a;
    return a;
}

void Factorial(int x = input())
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << x << " = " << fact << endl;
}
int main()
{

    Factorial();
    system("pause");
    return 0;
}
