/* Write C++ program to initialize values in one-dimensional array. 
Compute the sum of even values and their sum on screen.  */

#include <iostream>

using namespace std;

int sumEven(int[]);

int main()
{

    int num[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Sum of Even Values :: " << sumEven(num) << endl;
    system("pause");
    return 0;
}

int sumEven(int a[])
{
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    return sum;
}