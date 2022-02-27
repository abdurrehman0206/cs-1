#include <iostream>

using namespace std;

int main()
{
    int a[3][3], r, c;

    cout << "Enter 9 numbers :: ";
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            cin >> a[r][c];
        }
    }

    cout << "Even Numbers :: ";
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (a[r][c] % 2 == 0)
            {
                cout << a[r][c] << " ";
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
