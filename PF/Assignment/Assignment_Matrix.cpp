#include <iostream>

using namespace std;

int main()
{
    int row[2], col[2];
    int opt;
    char chk;
    do
    {
        cout << "Enter no. of rows of first Matrix :: ";
        cin >> row[0];
        cout << "Enter no. of columns of first Matrix :: ";
        cin >> col[0];
        float a[row[0]][col[0]];
        cout << "First Array Created of size " << row[0] << "x" << col[0] << endl;
        cout << endl;
        cout << "Enter no. of rows of second Matrix :: ";
        cin >> row[1];
        cout << "Enter no. of columns of second Matrix :: ";
        cin >> col[1];
        float b[row[1]][col[1]];
        cout << "Second Array Created of size " << row[1] << "x" << col[1] << endl;
        cout << endl;
        system("pause");
        system("CLS");
        do
        {
            system("CLS");
            cout << "1 => Input Values to Matrices" << endl;
            cout << "2 => Output Values of Matrices" << endl;
            cout << "3 => Multiply AxB" << endl;
            cout << "4 => Multiply BxA" << endl;
            cout << "9 => QUIT COMPLETELY!" << endl;
            cout << endl;

            cout << "Enter Option :: ";
            cin >> opt;

            system("pause");
            system("CLS");
            cout << "Option " << opt << " selected!" << endl;
            cout << endl;
            switch (opt)
            {
            default:
                cout << "Please Enter Correct Option!" << endl;
                break;
            case 1:
                for (int i = 0; i < 2; i++)
                {
                    cout << "Input for Array " << i + 1 << " " << row[0] << "x" << col[0] << endl;
                    cout << endl;
                    for (int r = 0; r < row[i]; r++)
                    {
                        for (int c = 0; c < col[i]; c++)
                        {
                            if (i == 0)
                            {
                                cout << "Input index " << r << "x" << c << " ::";
                                cin >> a[r][c];
                            }
                            else if (i == 1)
                            {
                                cout << "Input index " << r << "x" << c << " ::";
                                cin >> b[r][c];
                            }
                        }
                    }
                }
                system("pause");
                system("CLS");
                break;
            case 2:
                for (int i = 0; i < 2; i++)
                {
                    cout << "Output for Array " << i + 1 << " " << row[0] << "x" << col[0] << endl;
                    cout << endl;
                    for (int r = 0; r < row[i]; r++)
                    {
                        for (int c = 0; c < col[i]; c++)
                        {
                            if (i == 0)
                            {
                                cout << a[r][c] << "\t";
                            }
                            else if (i == 1)
                            {
                                cout << b[r][c] << "\t";
                            }
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                system("pause");
                system("CLS");
                break;
            case 3:
            {
                if (col[0] == row[1])
                {

                    cout << "Multiplication is Possible!" << endl;
                    float res0[row[0]][col[1]];
                    cout << "Created a Result Matrix of size " << row[0] << "x" << col[1] << endl;
                    cout << "Nullifying the Result Matrix......" << endl;
                    for (int i = 0; i < row[0]; i++)
                    {
                        for (int j = 0; j < col[1]; j++)
                        {
                            res0[i][j] = 0;
                        }
                    }
                    cout << "Nullified Successfully....." << endl;
                    cout << endl;

                    for (int i = 0; i < row[0]; i++)
                    {
                        for (int j = 0; j < col[1]; j++)
                        {
                            for (int k = 0; k < col[0]; k++)
                            {
                                res0[i][j] = res0[i][j] + (a[i][k] * b[k][j]);
                            }
                        }
                    }

                    cout << "Product AxB ::" << endl;

                    for (int i = 0; i < row[0]; i++)
                    {
                        for (int j = 0; j < col[1]; j++)
                        {
                            cout << res0[i][j] << "\t";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "Multiplication is Not Possible!" << endl;
                }
                system("pause");
                system("CLS");
            }
            break;
            case 4:
            {

                if (col[1] == row[0])
                {
                    cout << "Multiplication is Possible!" << endl;
                    float res1[row[1]][col[0]];
                    cout << "Created a Result Matrix of size " << row[1] << "x" << col[0] << endl;
                    cout << "Nullifying the Result Matrix......" << endl;
                    for (int i = 0; i < row[1]; i++)
                    {
                        for (int j = 0; j < col[0]; j++)
                        {
                            res1[i][j] = 0;
                        }
                    }
                    cout << "Nullified Successfully....." << endl;
                    cout << endl;
                    for (int i = 0; i < row[1]; i++)
                    {
                        for (int j = 0; j < col[0]; j++)
                        {
                            for (int k = 0; k < col[1]; k++)
                            {
                                res1[i][j] = res1[i][j] + (b[i][k] * a[k][j]);
                            }
                        }
                    }

                    cout << "Product BxA ::" << endl;

                    for (int i = 0; i < row[1]; i++)
                    {
                        for (int j = 0; j < col[0]; j++)
                        {
                            cout << res1[i][j] << "\t";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "Multiplication is Not Possible!" << endl;
                }
                system("pause");
                system("CLS");
            }
            break;
            case 9:
                exit(0);
                break;
            }
            cout << "Do you wish to go back to Menu! [y|Y] :: ";
            cin >> chk;
        } while (chk == 'Y' || chk == 'y');

        cout << "Do you wish to go back And Recreate the Matrices from scratch! [y|Y] :: ";
        cin >> chk;

    } while (chk == 'Y' || chk == 'y');
    system("pause");
    return 0;
}