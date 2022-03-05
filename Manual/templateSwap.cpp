#include <iostream>

using namespace std;

template <typename t>
void swa(t &a, t &b)
{
    t temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 24, b = 32;
    float x = 24.5, y = 32.8;
    cout << "Before Swap" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    swa(a, b);
    cout << "After Swap" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    cout << "Before Swap" << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    swa(x, y);
    cout << "After Swap" << endl;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    system("pause");
    return 0;
}
