/*Write C++ program to find the Greatest Common Divisor of two numbers by 
passing two numbers to function and function return greatest common 
divisor to calling function.*/

#include <iostream>

using namespace std;

int hcf(int, int, int);

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers :: ";
    cin >> a >> b >> c;
    cout << "HCF :: " << hcf(a, b, c) << endl;
    system("pause");
    return 0;
}

int hcf(int a, int b, int c)
{

    int lnum = 0;
    int hcf = 0;
    lnum = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    for (int i = 1; i <= lnum; i++)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}