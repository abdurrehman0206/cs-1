#include <iostream>
using namespace std;

int main()
{

    int A, B;
    cout << "Enter First Value:  ";
    cin >> A;
    cout << "Enter Second Value:  ";
    cin >> B;

    cout << "The Value of A before Swapping is :" << A << endl;
    cout << "The Value of B before Swapping is :" << B << endl;

    A = A + B;
    B = A - B;
    A = A - B;

    cout << "The Value of A After Swapping is :" << A << endl;
    cout << "The Value of B After Swapping is :" << B << endl;
    system("pause");
    return 0;
}