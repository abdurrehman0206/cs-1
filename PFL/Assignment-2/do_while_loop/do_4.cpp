#include <iostream>

using namespace std;

int main()
{
    int num, rev = 0;
    cout << "Enter a number :: ";
    cin >> num;

    do
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    } while (num != 0);
    cout << "Reverse :: " << rev << endl;
    system("pause");
    return 0;
}