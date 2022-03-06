#include <iostream>

using namespace std;

int Swap(int ***a3, int *b1)
{
    int temp;
    temp = ***a3;
    ***a3 = *b1;
    *b1 = temp;
}
int main()
{

    int a = 24, b = 12;
    int *a1, **a2, ***a3;
    int *b1;

    // assigned address based on degree

    a1 = &a;
    a2 = &a1;
    a3 = &a2;

    b1 = &b;

    cout << "Before Swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    Swap(a3, b1);
    cout << "After Swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    system("pause");
    return 0;
}
