#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Input Number :: ";
    cin >> a;

    int i = 1;
    do
    {
        cout << a << " x " << i << " = " << a * i << endl;
        i++;
    } while (i <= 10);

    system("pause");
    return 0;
}