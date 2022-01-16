#include <iostream>

using namespace std;

int main()
{
    int range;
    cout << "Enter Range :: ";
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= i; j++){
            for (int k = 1; k <= j;k++){
                cout << j;
            }
            cout << endl;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}