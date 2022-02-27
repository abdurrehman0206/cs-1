#include <iostream>

using namespace std;

int main()
{
    float a[2][2], b[2][2], result[2][2];

    cout << "Enter elements of 1st matrix :: " << endl;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            cout << "Enter " << i << " " << j << " :: ";
            cin >> a[i][j];
        }

    cout << "Enter elements of 2nd matrix :: " << endl;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            cout << "Enter " << i << " " << j << " :: ";
            cin >> b[i][j];
        }

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            result[i][j] = a[i][j] + b[i][j];
        }

    cout << "Sum of array :: " << endl;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
