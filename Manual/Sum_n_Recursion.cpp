#include <iostream>

using namespace std;

int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return a + sum(a - 1);
    }
}

int main()
{

    int a;

    cout << "Enter a number :: ";
    cin >> a;

    cout << sum(a);
    system("pause");
    return 0;
}
