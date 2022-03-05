#include <iostream>

using namespace std;

int main()
{

    int arr[10];
    int *p = arr;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter " << i + 1 << " :: ";
        cin >> *p++;
    }
    p = arr; // Reassigning pointer back to first location
    for (int i = 0; i < 10; i++)
    {
        cout << "Value " << i + 1 << " :: " << *p++ << endl;
    }

    system("pause");
    return 0;
}
