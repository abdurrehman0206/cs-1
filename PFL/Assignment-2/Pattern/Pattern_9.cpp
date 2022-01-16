#include <iostream>

using namespace std;

int main()
{
    //Input Below 9
    int range, i, j, rtemp, end;
    cout << "Enter range :: ";
    cin >> range;
    rtemp = range;
    for (i = 1; i <= range; i++)
    {
        end = rtemp--;
        if (i > end)
        {
            break;
        }
        for (j = 1; j <= range; j++)
        {
            if (j > i && j < end)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    system("pause");

    return 0;
}