#include <iostream>

using namespace std;

int main()
{
    int i, j, range;
    int cnt; //counter
    cout << "Enter Range :: ";
    cin >> range;
    for (i = 1; i <= range * 2; i++)
    {

        if (i > range)
        {
            cnt--;
        }
        else
        {
            cnt = i;
        }
        j = 1;
        while (j <= cnt && j != 0)
        {
            if (i <= range)
            {
                cout << j;
                j++;
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