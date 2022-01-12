#include <iostream>

using namespace std;

int main()
{

    int range, i, j, cnt, rtemp, temp;
    cout << "Enter range :: ";
    cin >> range;
    rtemp = range;
    temp = rtemp;

    for (i = 1; i <= range * 2; i++)
    {
        if (i > range)
        {
            rtemp = ++temp;
            cnt--;
        }
        else
        {
            rtemp = --temp;
            cnt = i;
        }
        for (j = 1; (j <= cnt && j != 0);)
        {
            if (j == 1 || j == cnt)
            {
                cout << "* ";
                j++;
            }
            else
            {
                cout << "  ";
                j++;
            }
        }
        cout << endl;
    }

    system("pause");

    return 0;
}