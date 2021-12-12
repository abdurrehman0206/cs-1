#include <iostream>
using namespace std;

int main()
{
    int a;
    bool isP = true;
    cout << "Enter any number :: ";
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if ((a % i == 0))
        {
            isP = false;
        }
    }

    switch (isP)
    {
    case true:
        cout << "Prime number!" << endl;
        break;
    default:
        cout << "Not Prime!" << endl;
        break;
    }
    system("pause");
    return 0;
}