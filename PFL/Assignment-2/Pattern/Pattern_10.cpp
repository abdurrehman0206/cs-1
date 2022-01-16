#include <iostream>

using namespace std;

int main()
{

    int size, i, j, cnt;
    cout << "Enter Size :: ";
    cin >> size;

    for (i = 1; i <= size * 2; i++)
    {
        if (i > size)
        {
            cnt--;
        }
        else
        {
            cnt = i;
        }
        for (j = 1; j <= cnt;)
        {
            if (i != size)
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
            else
            {
                cout << "* ";
                j++;
            }
        }
        cout << endl;
    }

    system("pause");

    return 0;
}