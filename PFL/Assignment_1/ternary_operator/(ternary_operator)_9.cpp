#include <iostream>
using namespace std;

int main()
{

    string pass = "123456";
    string p;
    cout << "Enter your password :: ";
    getline(cin, p);

    cout << (p == pass ? "Correct!" : "Incorrect!") << endl;

    system("pause");
    return 0;
}