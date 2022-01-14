#include <iostream>

using namespace std;

int main()
{
    int sr, er, num;
    cout << "Enter starting range :: ";
    cin >> sr;
    cout << "Enter ending range :: ";
    cin >> er;
    cout << "Enter number :: ";
    cin >> num;

    for (int i = sr; i <= er; i++)
    {
        if (i % num == 0)
        {
            cout << i << " is completely divisible by " << num << endl;
        }
    }

    system("pause");
    return 0;
}