#include <iostream>

using namespace std;

int main()
{
    char arr[20];
    cout << "Input Anything! :: ";
    cin.get(arr,20);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i];
        cout << i;
    }

    cout << endl;
    system("pause");
    return 0;
}