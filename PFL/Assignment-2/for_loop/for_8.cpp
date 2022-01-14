#include <iostream>

using namespace std;

int main()
{
    int range, prev2 = 0, prev1 = 1, current;

    cout << "Enter range :: ";
    cin >> range;

    cout << "Fibonacci Series upto " << range << " terms :: " << endl;
    cout << prev2 << " , " << prev1;
    for (int i = 3; i <= range; i++)
    {
        current = prev2 + prev1;
        cout << " , " << current;
        prev2 = prev1;
        prev1 = current;
    }
    cout << endl;

    system("pause");
    return 0;
}