#include <iostream>

using namespace std;

int main()
{
    int temp;
    int arr[3][3] = {{3, 4, 2},
                     {24, 1, 0},
                     {3, 4, 9}};

    cout << "Ascending Order : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = i; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if(k == i && l < j){
                        continue;
                    }
                    if (arr[i][j] > arr[k][l])
                    {   
                        temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }

    cout << "Output :" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}