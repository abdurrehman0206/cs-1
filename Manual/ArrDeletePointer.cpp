#include <iostream>

using namespace std;

int del(int *p)
{
    int ind, temp;
    cout << "Enter Index to delete :: ";
    cin >> ind;
    int *current = p, *next = p;
    current += ind;
    *current = 0;
    next = (current + 1);
    for (int i = ind; i < 20; i++)
    {
        temp = *current;
        *current = *next;
        *next = temp;
        current++;
        next++;
    }
}

int main()
{
    int a[] = {24, 3489, 14, 1548, 18, 154, 3465, 164, 1233, 156, 186, 164, 15, 164, 1233, 156, 446, 17, 9, 3, 15};
    int *p;
    cout << "Before Delete :: " << endl;
    for (int i = 0; i < 21; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    del(a);
    cout << "After Delete :: " << endl;
    for (int i = 0; i < 21; i++)
    {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}
