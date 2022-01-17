#include <iostream>

using namespace std;

int main()
{
    int row[2], col[2];
    int opt;

    cout << "Enter no. of rows of first Matrix :: ";
    cin >> row[0];
    cout << "Enter no. of columns of first Matrix :: ";
    cin >> col[0];
    float a[row[0]][col[0]];
    cout << "First Array Created of size " << row[0] << "x" << col[0] << endl;
    cout << "Enter no. of rows of second Matrix :: ";
    cin >> row[1];
    cout << "Enter no. of columns of second Matrix :: ";
    cin >> col[1];
    float b[row[1]][col[1]];
    cout << "Second Array Created of size " << row[1] << "x" << col[1] << endl;

    system("pause");
    system("CLS");
    do
    {
        cout << "1-->Input Values to Matrices" << endl;
        cout << "2-->Output Values of Matrices" << endl;
        cout << "2-->Multiply AxB" << endl;
        cout << "3-->Multiply BxA" << endl;
        cout << endl;

        cout << "Enter Option :: ";
        cin >> opt;

        system("pause");
        system("CLS");
        cout << "Option " << opt << " selected!" << endl;
        switch (opt)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                cout << "Input for Array " << i + 1 << endl;
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
            break;
        case 2:
            for (int i = 0; i < 2; i++)
            {
                cout << "Output for Array " << i + 1 << endl;
                for (int r = 0; r < row[i]; r++)
                {
                    for (int c = 0; c < col[i]; c++)
                    {
                        if (i == 0)
                        {
                            cout << a[r][c] << " ";
                        }
                        else if (i == 1)
                        {
                            cout << b[r][c] << " ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
            break;
        case 3:
            break;
        case 4:
            break;
        }
    } while (true);
    system("pause");
    return 0;
}