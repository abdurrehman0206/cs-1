#include <iostream>
using namespace std;

int main()
{

    float a;
    cout << "Input a number :: ";
    cin >> a;

    cout << "Number Is :: " << (a == 0 ? "Zero" : (a > 0 ? "Positive" : "Negative")) << endl;

    system("pause");
    return 0;
}