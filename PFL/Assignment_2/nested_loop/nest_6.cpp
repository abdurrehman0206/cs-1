#include <iostream>

using namespace std;

int main()
{

    int range;
    cout << "Enter Range :: ";
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    for (int i = range - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}