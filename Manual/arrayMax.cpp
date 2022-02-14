/* Write C++ program to check the maximum value from the list of 
integer values */

#include <iostream>

using namespace std;

int maxArr(int[]);

int main()
{
    int arr[] = {1, 7, 2, 2, 89, 42, 147, 16, 37, 132, 124, 111};
    cout << "Biggest Num :: " << maxArr(arr) << endl;
    system("pause");
    return 0;
}

int maxArr(int a[])
{
    int max = a[0];
    for (int i = 1; i < 12; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}