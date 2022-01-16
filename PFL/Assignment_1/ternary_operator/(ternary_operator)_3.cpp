#include <iostream>
using namespace std;

int main()
{

    float a, b;
    cout << "Input 1st number :: ";
    cin >> a;
    cout << "Input 2nd number :: ";
    cin >> b;

    cout << "Greater Number :: " << (a > b ? a : b) << endl;

    system("pause");
    return 0;
}