#include <iostream>

using namespace std;

int main()
{
    int i, j, range;
    int cnt; 
    cout << "Input Range :: ";
    cin >> range;
    for (i = 1; i <= range * 2; i++) 
    {

        if (i > range) {
            cnt--;      
        }
        else
        {
            cnt = i;
        }
        for(j = 1 ; (j <=cnt && j!=0);)
        {
            cout << j ;
            j++;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}