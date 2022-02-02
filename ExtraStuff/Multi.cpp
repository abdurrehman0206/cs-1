#include <iostream>
using namespace std;
int main()
{
    int row1, row2, col1, col2; //row1 and col1 are rows and columns of first matrix
                                //row2 and col2 are rows and columns of second matrix
    // Getting Rows and Columns of first Matrix
    cout << "Enter Rows of First Matrix :: ";
    cin >> row1;

    cout << "Enter Columns of First Matrix :: ";
    cin >> col1;

    //Since we already inputted the rows and columns of first Matrix now we can declare the matrix
    cout << "First Matrix created of order " << row1 << "x" << col1 << endl;
    int mat1[row1][col1];

    cout << endl;

    // Getting Rows and Columns of second Matrix
    cout << "Enter Rows of Second Matrix :: ";
    cin >> row2;

    cout << "Enter Columns of Second Matrix :: ";
    cin >> col2;

    //Since we already inputted the rows and columns of second matrix now we can declare the matrix
    cout << "Second Matrix created of order " << row2 << "x" << col2 << endl;
    int mat2[row2][col2];

    cout << endl;

    cout << "Enter Elements for First Matrix: "<< endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "Input " << i << "x" << j << " : ";
            cin >> mat1[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Enter  Elements for Second Matrix: " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "Input " << i << "x" << j << " : ";
            cin >> mat2[i][j];
        }
        cout << endl;
    }

    cout << endl;

    if (col1 == row2)
    {
        cout << "Multiplication is possible" << endl;
        int sum[row1][col2]; //since the result matrix has no. of rows of first Matrix and columns of second

        //Nullifying the result matrix so there is no garbage values
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                sum[i][j] = 0;
            }
        }

        //Multiplication

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    sum[i][j] = sum[i][j] + (mat1[i][k] * mat2[k][j]);
                }
            }
        }

        //Printing Result Matrix

        cout << "Multiplication Result:" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << sum[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Multiplication is Not Possible!" << endl;
    }

    system("pause");
    return 0;
}