/* Write C++ Program to Sort the Array List in Ascending Order */

#include <iostream>

using namespace std;

void swap(int &, int &);
void sort(int[]);
void display(int[]);

int main()
{
    int arr[] = {1, 7, 2, 2, 89, 42, 147, 16, 37, 132, 124, 111};
    cout << "Before Sorting :: " << endl;
    display(arr);
    sort(arr);
    cout << "After Sorting :: " << endl;
    display(arr);
    system("pause");
    return 0;
}

void sort(int arr[])
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int arr[])
{
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}