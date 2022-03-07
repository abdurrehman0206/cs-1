#include <iostream>

using namespace std;

int main()
{

    int ai;
    int *pi = &ai;
    float x;
    float *pf = &x;
    *pi = 3;
    *pf = 3.3;

    int a[] = {11, 12, 13, 14, 15};
    int *p, *pt;
    p = a;
    pt = a;

    // cout << "_INT_" << endl;
    // cout << "a = " << a << endl;
    // cout << "&a = " << &a << endl;
    // cout << "pi = " << pi << endl;
    // cout << "*pi = " << *pi << endl;
    // cout << "&pi = " << &pi << endl;

    // cout << "_FLOAT_" << endl;
    // cout << "x = " << x << endl;
    // cout << "&x = " << &x << endl;
    // cout << "pf = " << pf << endl;
    // cout << "*pf = " << *pf << endl;
    // cout << "&pf = " << &pf << endl;

    cout << "_ARRAY_" << endl;
    cout << endl;

    cout << " a = " << a << endl;
    cout << " p = " << p << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " __arr[" << i << "]__" << endl;
        cout << " a[" << i << "] = " << a[i] << endl;
        cout << " *(p+i) = " << *(p + i) << endl;
        cout << " p++ = " << pt++ << endl;
        cout << " &a[" << i << "] = " << &a[i] << endl;

        cout << endl;
    }

    system("pause");
    return 0;
}
