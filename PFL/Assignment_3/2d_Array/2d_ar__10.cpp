#include <iostream>
using namespace std;
int main()
{
    int A[3][3], transpose[3][3], i, j;
    cout << "Enter matrix elements " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Matrix is " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    cout << "Transpose matrix is " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
