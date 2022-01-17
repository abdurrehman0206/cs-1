#include <iostream>

using namespace std;

int main()
{
    int range, sum = 0;
    cout << "Enter range :: ";
    cin >> range;
    for (int i = 1; i <= range; i++)
    {
        sum += i;
    }
    cout << "Sum :: " << sum << endl;
    system("pause");
    return 0;
}