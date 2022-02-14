/*Write C++ program to find the list of Perfect numbers between 1 to 1000 
using function*/
#include <iostream>

using namespace std;

bool isPerfect(int);

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " is perfect" << endl;
        }
    }
    system("pause");
    return 0;
}

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}