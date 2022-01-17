#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    int tnum;
    cout << "Input a number to reverse :: ";
    cin >> num;
    tnum = num;
    cout << "Number :: " << num << endl;
    while (num)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    cout << "Reverse :: " << rev << endl;
    if (tnum == rev)
    {
        cout << "Its a palindrome!" << endl;
    }
    else
    {
        cout << "Its not a palindrome!" << endl;
    }
    system("pause");
    return 0;
}