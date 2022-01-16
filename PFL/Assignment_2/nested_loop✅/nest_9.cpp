#include <iostream>

using namespace std;

int main()
{
    //Input Below 9
    int range, i, j, end, start;
    cout << "Enter range :: ";
    cin >> range;
    start = range;
    end = range;
    for (i = 1; i < range; i++)
    {
        for (j = 1; j < range * 2; j++)
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
        end++;
        start--;
        cout << endl;
    }

    start = 1;
    end = (range * 2);
    for (i = range; i > 0; i--)
    {
        for (j = 1; j <= range * 2; j++)
        {

            if (j == start || j == end-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        end--;
        start++;
        cout << endl;
    }

    system("pause");

    return 0;
}