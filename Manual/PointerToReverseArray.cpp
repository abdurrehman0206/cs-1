#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *first = arr;
    int *last = &arr[6];
    cout << "Before Reversing :: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (int i = 0; !(*first == *last); i++)
    {
        swap(*first++, *last--);
    }
    cout << "After Reversing :: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    system("pause");
    return 0;
}
