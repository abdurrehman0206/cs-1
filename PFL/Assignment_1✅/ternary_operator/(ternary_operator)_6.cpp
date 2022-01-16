#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Input a number :: ";
    cin >> a;

    cout << "Number is :: " << (a % 2 ? "Odd" : "Even") << endl;

    system("pause");
    return 0;
}