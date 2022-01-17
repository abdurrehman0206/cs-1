#include <iostream>

using namespace std;

int main()
{
    int range;
    bool flag = 1;
    cout << "Enter Range :: ";
    cin >> range;

    for (int i = 2; i <= range; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << " is Prime!";
        }
        else
        {
            cout << i << " is Not Prime!";
        }
        cout << endl;
        flag = 1;
    }

    system("pause");
    return 0;
}