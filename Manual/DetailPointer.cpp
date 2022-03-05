#include <iostream>

using namespace std;

int main()
{

    int a;
    int *pi = &a;
    float x;
    float *pf = &x;

    *pi = 3;
    *pf = 3.3;

    cout << "_INT_" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "pi = " << pi << endl;
    cout << "*pi = " << *pi << endl;
    cout << "&pi = " << &pi << endl;

    cout << "_FLOAT_" << endl;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "pf = " << pf << endl;
    cout << "*pf = " << *pf << endl;
    cout << "&pf = " << &pf << endl;

    system("pause");
    return 0;
}
