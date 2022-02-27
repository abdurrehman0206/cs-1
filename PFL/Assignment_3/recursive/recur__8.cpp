#include <iostream>

using namespace std;

int cnt(int num, int sum)
{
    if (num == 0)
    {
        return sum;
    }
    else
    {
        sum += num % 10;
        return cnt(num / 10, sum);
    }
}

int main()
{
    int num;

    cout << "Enter a number ::";
    cin >> num;

    cout << "Sum of digits: " << cnt(num, 0) << endl;

    system("pause");
    return 0;
}