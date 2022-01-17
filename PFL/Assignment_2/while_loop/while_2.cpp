#include <iostream>

using namespace std;

int main()
{
    int size, i = 0, j = 1, temp;
    cout << "Enter Array Size :: ";
    cin >> size;
    int arr[size];
    cout << "Array of size " << size << " created!" << endl;

    while (i < size)
    {
        cout << "Input Value at index " << i << " :: ";
        cin >> arr[i];
        i++;
    }
    i = 0;
    cout << "UnSorted Array : { ";
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << "}" << endl;
    i = 0;

    while (i < size)
    {
        j = i;
        while (j < size)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    i = 0;
    cout << "Sorted Array : { ";
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << "}" << endl;
    system("pause");
    return 0;
}