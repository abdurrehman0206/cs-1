/*Write a program that inputs a number and passes the number to a function. 
The function calculates factorial and display the result.*/
#include <iostream>

using namespace std;

void factorial(int);

int main()
{
    int a;
    cout << "Enter a number :: ";
    cin >> a;
    factorial(a);
    system("pause");
    return 0;
}

void factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout << "Factorial :: " << fact << endl;
}