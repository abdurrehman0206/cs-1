#include <iostream>

using namespace std;

int rev(int num, int re)
{
    if (num == 0)
    {
        return re;
    }
    else
    {
        re = (re * 10) + (num % 10);
        return rev(num / 10, re);
    }
}

int main()
{
    int num = 0;
    int re = 0;
    cout << "Enter a number :: ";
    cin >> num;
    

    re = rev(num, 0);
    cout << "Number :: " << num << endl;
    cout << "Reverse :: " << re << endl;
    if (re == num)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    system("pause");
    return 0;
}
