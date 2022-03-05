#include <iostream>

using namespace std;

int main()
{

    int a;
    int *p = &a;
    cout << "Enter a number :: ";
    cin >> *p;
    cout << "The number is :: " << a << endl;

    system("pause");
    return 0;
}
