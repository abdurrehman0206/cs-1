#include <iostream>

using namespace std;

int main()
{
    //Input Below 9
    int range, i, j, end, start;
    cout << "Enter range :: ";
    cin >> range;
    start = 0;
    end = (range * 2);
    for (i = range; i >= 0; i--)
    {
        for (j = 0; j <= range * 2; j++)
        {
            if (i != range)
            {
                if (j == end || j == start)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                cout << "*";
            }
        }
        end--;
        start++;
        cout << endl;
    }

    system("pause");

    return 0;
}