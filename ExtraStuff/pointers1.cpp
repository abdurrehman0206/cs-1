#include <iostream>

using namespace std;

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = -1;
    cout << "Enter Index: ";
    cin >> index;

    int *current = a;
    current += index;
    *current = 0;
    int *next = a;
    next += (index + 1);

    int tmp;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = index; i < 10; i++)
    {
        tmp = *current;
        *current = *next;
        *next = tmp;
        current++;
        next++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
