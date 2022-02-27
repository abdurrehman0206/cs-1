#include <iostream>

using namespace std;

int cnt(int num, int cn)
{
    if (num == 0)
    {
        return cn;
    }
    else
    {
        return cnt(num / 10, ++cn);
    }
}

int main()
{
    int num;

    cout << "Enter a number ::";
    cin >> num;

    cout << "Number of digits: " << cnt(num, 0) << endl;

    system("pause");
    return 0;
}
