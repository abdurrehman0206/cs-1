#include <iostream>

using namespace std;

bool isPrime(int num);

int main()
{
    int num = 0;
    int p_num, cnt = 1;
    cout << "Enter a number :: ";
    cin >> num;
    p_num = num - 1;
    for (int i = 0; i < num; i++)
    {
        if (p_num + cnt == num)
        {
            if (isPrime(p_num) && isPrime(cnt))
            {
                cout << p_num << " + " << cnt << " = " << num << endl;
            }
        }
        p_num--;
        cnt++;
    }
    system("pause");
    return 0;
}

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}