#include <iostream>

using namespace std;

void sort(string *current)
{
    string temp;
    string *next = (current);
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if (*current > *next)
            {
                temp = *current;
                *current = *next;
                *next = temp;
            }
            next++;
        }
        current++;
        next = current;
    }
}

int main()
{
    string a[] = {"pomegranate", "apple", "orange", "banana", "mango", "peach"};
    cout << "Before sorting" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a);
    cout << "After sorting" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
