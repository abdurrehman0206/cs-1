/* Write C++ Program to find the factorial of each value of the array 
using function. */
#include <iostream>

using namespace std;

void factArr(int[]);

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    factArr(arr);
    system("pause");
    return 0;
}

void factArr(int a[])
{
    int fact = 1;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            fact *= j;
        }
        cout << "Factorial of " << a[i] << " = " << fact << endl;
        fact = 1;
    }
}