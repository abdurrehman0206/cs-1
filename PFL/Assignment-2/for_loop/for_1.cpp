#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number to find the table of :: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    system("pause");
    return 0;
}