#include <iostream>

using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    fun(n / 2);
    cout << n % 2;
}

int main()
{
    int num = 0;

    cout << "Enter a number :: ";
    cin >> num;

    fun(num);
    cout << endl;
    system("pause");
    return 0;
}
