#include <iostream>
using namespace std;

int main()
{

    string pass;
    cout << "Enter the provided password :: ";
    getline(cin, pass); //space sensitive

    if (pass == "lvl1")
    {
        cout << "Welcome to Access Level 1 !" << endl;
    }
    else if (pass == "lvl2")
    {
        cout << "Welcome to Access Level 2 !" << endl;
    }
    else if (pass == "lvl3")
    {
        cout << "Welcome to Access Level 3 !" << endl;
    }
    else if (pass == "lvl4")
    {
        cout << "Welcome to Access Level 4 !" << endl;
    }
    else
    {
        cout << "Error! Wrong Pass!" << endl;
    }

    system("pause");
    return 0;
}