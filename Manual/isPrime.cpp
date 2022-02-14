//Write a C++ program that contain a function “isPrime” which return prime
//number from 2-100

#include <iostream>

using namespace std;

bool isPrime(int);
int main()
{
    for (int i = 2; i < 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " is prime" << endl;
        }
    }

    system("pause");
    return 0;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}