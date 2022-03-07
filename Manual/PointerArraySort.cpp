#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5, 7, 4, 12, 78, 11, 0, 1, 9, 181, 171, 18};
    int *current = arr;
    int *next;
    next = (current + 1);
    int temp;

    cout << "Before Sorting :: ";
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 12; i++)
    {
        for (int j = i; j < 12; j++)
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

    cout << "After Sorting :: ";
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
