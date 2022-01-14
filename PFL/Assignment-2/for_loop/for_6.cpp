#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Input array size :: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Input Value at index " << i << " :: ";
        cin >> arr[i];
    }
    cout << "______________________" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << " :: " << arr[i] << endl;
    }

    system("pause");
    return 0;
}