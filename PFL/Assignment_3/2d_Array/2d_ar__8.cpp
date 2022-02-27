#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], i, j, Odd[9];
    cout << "Enter 9 values for 2-D array " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Values for 2D array are " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Odd numbers are " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                cout << arr[i][j] << "\t";
            }
        }
    }
    system("pause");
    return 0;
}
