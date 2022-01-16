#include <iostream>

using namespace std;

int main()
{

    int size, i, j, cnt;
    cout << "Enter Size :: ";
    cin >> size;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= i;)
        {
            if (i != size)
            {
                if (j == 1 || j == i)
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