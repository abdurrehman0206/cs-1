#include <iostream>

using namespace std;

int main()
{
    int i, j, range;
    int cnt; //counter for basically counting iterations
    cout << "Enter Range :: ";
    cin >> range;
    for (i = 1; i <= range * 2; i++) // i <= range*2 as we are incrementing the loop till the range and then decterementing till 0(acting as 2 loops)
    {

        if (i > range)  // this if_else checks if we are in the top half of the triangle or bottom 
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
            cout << j ;
            j++;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}