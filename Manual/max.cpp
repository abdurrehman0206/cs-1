/* Write C++ program that inputs two numbers and passes these numbers to 
a function. The function find the maximum number and display the result. */
#include <iostream>

using namespace std;

void max(int, int);

int main()
{
    int a, b;
    cout << "Enter 2 numbers :: ";
    cin >> a >> b;
    max(a, b);
    system("pause");
    return 0;
}

void max(int a, int b)
{

    if (a > b)
    {
        cout << "Greater number is :: " << a << endl;
    }
    else if (a < b)
    {
        cout << "Greater number is :: " << b << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }
}