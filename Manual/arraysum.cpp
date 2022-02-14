/*Write a C++ program to pass array as an argument to a function and 
compute the sum of array elements. Function should return the calculated 
sum to the calling function*/

#include <iostream>

using namespace std;

int sumArr(int[]);
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Sum of Array :: " << sumArr(arr) << endl;
    system("pause");
    return 0;
}

int sumArr(int a[7])
{
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += a[i];
    }

    return sum;
}