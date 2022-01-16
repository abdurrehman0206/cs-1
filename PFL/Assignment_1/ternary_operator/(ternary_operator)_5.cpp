#include <iostream>
using namespace std;

int main()
{

    float marks;
    cout << "Input marks :: ";
    cin >> marks;

    cout << "Status :: " << (marks >= 40 ? "Passed" : "Failed") << endl;

    system("pause");
    return 0;
}