#include <iostream>

using namespace std;

int &SetZero(int &, int &);

int main()
{
    int a, b;
    cout << "Enter 2 number :: ";
    cin >> a >> b;
    cout << "Before Call :: " << endl;
    cout << a << endl;
    cout << b << endl;
    SetZero(a, b) = 0;
    cout << "After Call :: " << endl;
    cout << a << endl;
    cout << b << endl;
    system("pause");
    return 0;
}

int &SetZero(int &a, int &b)
{

    return (a < b) ? a : b;
}