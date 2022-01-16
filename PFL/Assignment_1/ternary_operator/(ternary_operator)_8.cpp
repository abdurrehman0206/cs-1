#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char s;
    int error = 0;

    cout << "Input 1st number :: ";
    cin >> a;
    cout << "Input 2nd number :: ";
    cin >> b;
    cout << "Input Operator :: ";
    cin >> s;

    cout << "Result :: " << ((s == '+') ? a + b : ((s == '-') ? a - b : ((s == '*') ? a * b : ((s == '/') ? a / b : error)))) << endl;
    system("pause");
    return 0;
}