#include <iostream>

using namespace std;

void del(int[], int);
void swap(int &, int &);
void display(int[]);
int main()
{
    int index;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Before Delete :: ";
    display(arr);

    cout << "Enter Index to Delete :: ";
    cin >> index;

    del(arr, index);
    cout << "After Delete :: ";
    display(arr);

    system("pause");
    return 0;
}

void del(int a[], int index)
{
    a[index] = 0;
    for (int i = index+1; i < 7; i++)
    {
        swap(a[i-1], a[i]);
    }

}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int a[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}