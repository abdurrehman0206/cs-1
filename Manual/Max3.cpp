/*Write C++ program to find the maximum of three values and return the 
maximum value to the calling function*/
#include <iostream>

using namespace std;

int max(int, int, int);
int main()
{
    int a, b, c;
    cout << "Enter 3 Numbers :: ";
    cin >> a >> b >> c;
    cout << "Max :: " << max(a, b, c) << endl;
    system("pause");
    return 0;
}

int max(int a, int b, int c)
{
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}