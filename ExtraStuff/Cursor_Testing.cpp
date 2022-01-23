#include <iostream>
#include "goto.h"
using namespace std;

int main()
{
    string a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gotoxy(j*3, i*2);
            cin >> a[i][j];
        }
    }

    system("pause");
    return 0;
}