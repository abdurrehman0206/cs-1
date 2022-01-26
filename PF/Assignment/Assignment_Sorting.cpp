#include <iostream>

using namespace std;

int main()
{
    int row, col, opt, temp;
    cout << "Enter Number of Rows :: ";
    cin >> row;
    cout << "Enter Number of Columns :: ";
    cin >> col;
    int arr[row][col];
    cout << row << "x" << col << " Array Created!" << endl;
    system("pause");
    system("CLS");

    do
    {
        cout << "1 ==> Input Array!" << endl;
        cout << "2 ==> Output Array!" << endl;
        cout << "3 ==> Sort Array in Ascending order!" << endl;
        cout << "4 ==> Sort Array in Descending order!" << endl;
        cout << "9 ==> QUIT!" << endl;
        cout << endl;

        cout << "Enter Option :: ";
        cin >> opt;

        system("CLS");

        cout << "Option Selected :: " << opt << endl;
        cout << endl;

        switch (opt)
        {
        default:
            cout << "Enter Correct Option!" << endl;
            break;
        case 1:
            cout << "Input :" << endl;
            cout << endl;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout << "Input Index " << i << "x" << j << " :: ";
                    cin >> arr[i][j];
                }
            }
            cout << endl
                 << "Input Successful!" << endl;
            system("pause");
            system("CLS");
            break;
        case 2:
            cout << "Output :" << endl;
        label1:
            cout << endl;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout << arr[i][j] << "\t";
                }
                cout << endl;
            }
            system("pause");
            system("CLS");
            break;
        case 3:
            cout << "Ascending Order : " << endl;
            for (int comp_r = 0; comp_r < row; comp_r++)
            {
                for (int comp_c = 0; comp_c < col; comp_c++)
                {
                    for (int inner_r = comp_r; inner_r < row; inner_r++)
                    {
                        
                        for (int inner_c = 0; inner_c < col; inner_c++)
                        {
                            if (inner_r == comp_r && inner_c < comp_c)
                            {
                                continue;
                            }

                            if (arr[comp_r][comp_c] > arr[inner_r][inner_c])
                            {
                                temp = arr[comp_r][comp_c];
                                arr[comp_r][comp_c] = arr[inner_r][inner_c];
                                arr[inner_r][inner_c] = temp;
                            }
                        }
                    }
                }
            }
            goto label1;
            break;
        case 4:
            cout << "Descending Order : " << endl;
            for (int comp_r = 0; comp_r < row; comp_r++)
            {
                for (int comp_c = 0; comp_c < col; comp_c++)
                {
                    for (int inner_r = comp_r; inner_r < row; inner_r++)
                    {
                        
                        for (int inner_c = 0; inner_c < col; inner_c++)
                        {
                            
                            if (inner_r == comp_r && inner_c < comp_c)
                            {
                                continue;
                            }

                            if (arr[comp_r][comp_c] < arr[inner_r][inner_c])
                            {
                                temp = arr[comp_r][comp_c];
                                arr[comp_r][comp_c] = arr[inner_r][inner_c];
                                arr[inner_r][inner_c] = temp;
                            }
                        }
                    }
                }
            }
            goto label1;
            break;
        case 9:
            exit(0);
            break;
        }
    } while (true);

    system("pause");
    return 0;
}