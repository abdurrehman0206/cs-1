#include <iostream>

using namespace std;

int pw(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * pw(n, --p);
    }
}

int main()
{
    int base = 0, power = 0;
    cout << "Enter Base :: ";
    cin >> base;
    cout << "Enter a power :: ";
    cin >> power;
    cout << base << "^" << power << " :: " << pw(base, power) << endl;

    system("pause");
    return 0;
}
