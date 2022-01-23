#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout << "Input number of Rows :";
    cin >> row;
    cout << "Input number of Columns :";
    cin >> col;
    cout << endl;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Input index " << i << "x" << j << " :: ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}