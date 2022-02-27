#include <iostream>

using namespace std;

int main()
{

    unsigned int row, col;
    cout << "Enter Number of Rows :: ";
    cin >> row;
    cout << "Enter Number of Columns :: ";
    cin >> col;
    int arr[row][col];
    cout << row << "x" << col << " Matrix Created!" << endl;
    cout << "_____INPUT_____" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Input " << i << "x" << j << " :: ";
            cin >> arr[i][j];
        }
    }
    cout << "_____OUTPUT_____" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}