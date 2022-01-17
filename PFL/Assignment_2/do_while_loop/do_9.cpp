#include <iostream>

using namespace std;

int main()
{
    int start, end, i, j;
    bool flag = 1;
    cout << "Enter Range Start :: ";
    cin >> start;
    cout << "Enter Range End :: ";
    cin >> end;
    i = start;
    cout << "Range :: "
         << "(" << start << "," << end << ")" << endl;
    do
    {
        j = 2;
        while (j < i)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
            j++;
        }
        if (flag == 1)
        {
            cout << i << " is Prime!" << endl;
        }
        flag = 1;
        i++;
    } while (i >= start && i <= end);

    system("pause");
    return 0;
}