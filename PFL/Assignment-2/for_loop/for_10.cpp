#include <iostream>

using namespace std;

int main()
{
    int num;
    bool flag = 1;

    cout << "Enter a number to check prime :: ";
    cin >> num;

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << num << " is Prime!" << endl;
    }
    else
    {
        cout << num << " is Not Prime!" << endl;
    }

    system("pause");
    return 0;
}