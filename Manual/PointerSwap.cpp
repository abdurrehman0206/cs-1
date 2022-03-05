#include <iostream>

using namespace std;

void swap(int *, int *);

int main()
{
    int a = 12;
    int b = 15;
    cout << "Before Swap :: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "After Swap :: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}