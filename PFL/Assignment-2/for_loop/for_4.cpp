#include <iostream>

using namespace std;

int main()
{
    int num, factorial = 1;
    cout << "Enter a Number to find factorial :: ";
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        factorial *= i;
    }
    cout << "Factorial :: " << factorial << endl;

    system("pause");
    return 0;
}