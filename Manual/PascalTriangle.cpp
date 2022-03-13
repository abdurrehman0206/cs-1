#include <iostream>

using namespace std;

int main()
{

    int rows = 5, s, k;

    for (int i = 1; i <= rows; i++)
    {
        k = 1;
        for (int space = 1; space <= rows - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k = k * (i - j) / j;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
