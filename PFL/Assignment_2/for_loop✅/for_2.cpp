#include <iostream>

using namespace std;

int main()
{
    int range;
    cout << "Enter range to find even/odd numbers :: ";
    cin >> range;
    for (int i = 1; i <= range; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " --> Even" << endl;
        }
        else
        {
            cout << i << " --> Odd" << endl;
        }
    }

    system("pause");
    return 0;
}