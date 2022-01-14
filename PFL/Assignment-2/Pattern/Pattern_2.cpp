#include <iostream>

using namespace std;

int main()
{
    int i, j, range;
    int cnt; //counter for basically counting iterations
    cout << "Enter Range :: ";
    cin >> range;
    for (i = 1; i <= range * 2; i++) // i <= range*2 as we are incrementing the loop till the range and then decrementing till 0(acting as 2 loops)
    {

        if (i > range)  // this if_else checks if we are in the top half of the triangle or bottom 
        {
            cnt--;      //if we are in the bottom half we want to decrement counter on each run so we go towards zero 
        }
        else
        {
            cnt = i;    //if we are still in top half we want counter to be always i  
        }
        
        for (j = 1; j <= cnt && j != 0;)    // The above if_else controls this for_loop (Because of the above if_else this loop is acting like 2 loops one for printing normal triangle one for reversed )
        {
            cout << j ;
            j++;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}