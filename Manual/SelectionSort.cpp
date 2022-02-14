/* Write C++ program to sort the array in ascending order using 
selection sort */

#include <iostream>

using namespace std;

void swap(int &, int &);
void select(int[]);
void display(int[]);

int main()
{
    int arr[] = {1, 7, 2, 2, 89, 42, 147, 16, 37, 132, 124, 111};
    cout << "Before Sorting :: " << endl;
    display(arr);
    select(arr);
    cout << "After Sorting :: " << endl;
    display(arr);
    system("pause");
    return 0;
}

void select(int a[])
{
    int lowest = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (lowest > a[j])
            {
                lowest = a[j];
            }
        }
        swap(lowest, a[i]);
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
