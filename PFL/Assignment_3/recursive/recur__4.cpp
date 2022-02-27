#include <iostream>

using namespace std;

int isPrime(int o_num, int cn, int c)
{

    if (cn == o_num)
    {
        return c;
    }
    if (o_num % cn == 0)
    {
        c++;
    }
    return isPrime(o_num, ++cn, c);
}

int main()
{
    int num;
    cout << " Enter a Number :: ";
    cin >> num;

    if (isPrime(num, 2, 0) == 0)
    {
        cout << "Prime!" << endl;
    }
    else
    {
        cout << "Not Prime!" << endl;
    }

    system("pause");
    return 0;
}
