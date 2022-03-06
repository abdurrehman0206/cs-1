#include <iostream>

using namespace std;

int pali(int n, int s)
{
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = (s * 10) + n % 10;
        return pali(n / 10, s);
    }
}

int main()
{
    int num;
    cout << "Enter a number ::";
    cin >> num;
    cout << pali(num, 0);
    system("pause");
    return 0;
}
