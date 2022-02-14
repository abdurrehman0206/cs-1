/* Write C++ program to delete a value from a specified location of one dimensional array of N elements.  */

#include <iostream>

using namespace std;

void del(int[], int);
void display(int[], int);
void swap(int &, int &);

int main()
{
    int size;
    size = 12;
    int arr[size] = {7, 2, 1, 2, 89, 4, 147, 16, 37, 132, 124, 111};

    cout << "Before Deleting :: " << endl;
    display(arr, size);
    del(arr, size);
    cout << "After Deleting :: " << endl;
    display(arr, size);
    system("pause");
    return 0;
}

void del(int a[], int s)
{
    int ind = -1;
    cout << "Enter the index to delete :: ";
    cin >> ind;
    if (ind >= s)
    {
        cout << "Index out of bounds !" << endl;
        return;
    }
    else
    {
        for (int i = ind; i < s - 1; i++)
        {
            swap(a[i], a[i + 1]);
        }
        a[s - 1] = 0;
    }
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}