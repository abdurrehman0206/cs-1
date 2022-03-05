#include <iostream>

using namespace std;

void swap(void *a, void *b)
{
    int temp;
    temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

int main()
{

    int a = 12, b = 16;
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
