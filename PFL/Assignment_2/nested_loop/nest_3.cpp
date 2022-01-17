#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a number :: ";
    cin >> num;

    for (int i = num; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}