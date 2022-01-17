#include <iostream>

using namespace std;

int main()
{
    int n, rem = 0;
    cout << "Enter a number :: ";
    cin >> n;
    for (int i = 1; n != 0; i++)
    {
        rem += n % 10;
        n /= 10;
    }
    cout << "Sum of Digits :: " << rem << endl;

    system("pause");
    return 0;
}