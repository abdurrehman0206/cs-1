#include <iostream>

using namespace std;

int main()
{

    int size, i, j, cnt, stemp, temp;
    cout << "Enter Size :: ";
    cin >> size;
    stemp = size;
    temp = stemp;

    for (i = 1; i <= size * 2; i++)
    {
        if (i > size)
        {
            stemp = ++temp;
            cnt--;
        }
        else
        {
            stemp = --temp;
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