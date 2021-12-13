#include <iostream>
using namespace std;

int main()
{
    float a, b, c;

    cout << "Input 1st number :: ";
    cin >> a;
    cout << "Input 2nd number :: ";
    cin >> b;
    cout << "Input 3rd number :: ";
    cin >> c;

    cout << "Largest Number :: " << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << endl;

    system("pause");
    return 0;
}