#include <iostream>

using namespace std;

int main()
{
    int i, j, range;
    int cnt, rtemp, temp;
    cout << "Enter Range :: ";
    cin >> range;
    rtemp = range;
    temp = rtemp;
    for (i = 1; i <= range * 2; i++)
    {

        if (i > range)
        {
            cnt--;
            rtemp = ++temp;
        }
        else
        {
            rtemp = --temp;
            cnt = i;
        }
        for (j = 1; (j <= cnt && j != 0);)
        {
            if (rtemp > 0)
            {
                cout << " ";
                rtemp--;
            }
            else
            {
                cout << j;
                j++;
            }
        }

        cout << endl;
    }
    system("pause");
    return 0;
}