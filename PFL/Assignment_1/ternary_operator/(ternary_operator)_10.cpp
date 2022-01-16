#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Input Anything :: ";
    cin >> c;

    cout << ((c >= '0' && c <= '9') ? "Its a number" : "Its an alphabet or special charachter") << endl;

    system("pause");
    return 0;
}