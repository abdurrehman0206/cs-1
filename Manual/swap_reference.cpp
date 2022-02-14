/*Write a C++ program by defining a function “Swap” to exchange two values 
by passing arguments by reference to function.*/
#include <iostream>

using namespace std;

void swap(int &, int &);

int main()
{
    int a;
    int b;
    cout << "Enter 1st number :: ";
    cin >> a;
    cout << "Enter 2nd number :: ";
    cin >> b;
    cout << "Before Swap :: " << endl;
    cout << a << endl;
    cout << b << endl;
    swap(a, b);
    cout << "After Swap :: " << endl;
    cout << a << endl;
    cout << b << endl;

    system("pause");
    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}