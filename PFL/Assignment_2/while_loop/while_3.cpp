#include <iostream>
using namespace std;

int main()
{
    int i = 0, nt, ft, sum = 0;
    int tft; //temp ft;

    cout << "Enter First Term :: ";
    cin >> ft;
    tft = ft;
    cout << "Enter Number of Term :: ";
    cin >> nt;
    while (i <= nt)
    {
        cout << ft;
        if (i < nt)
        {
            cout << " + ";
        }
        ft = ft * 10 + tft;
        sum = sum + ft;
        i++;
    }
    cout << "  =" << sum << endl;

    system("pause");
    return 0;
}