#include <iostream>

using namespace std;

void swap(int &, int &);
void select(int[]);
void display(int[]);

int main()
{
    int arr[] = {7, 2, 1, 2, 89, 4, 147, 16, 37, 132, 124, 111};
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
    bool flag = false;
    int index;
    int lowest = a[0];
    for (int i = 0; i < 12; i++)
    {
        flag = false;
        lowest = a[i];
        for (int j = i + 1; j < 12; j++)
        {
            if (lowest > a[j])
            {
                lowest = a[j];
                flag = true;
                index = j;
            }
        }
        if (flag == true)
        {
            swap(a[index], a[i]);
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
