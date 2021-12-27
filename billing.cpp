#include <iostream>
using namespace std;

int main()
{
    int cu, pu, uu;
    cout << "Enter Current Unit :: ";
    cin >> cu;
    cout << "Enter Previous Unit :: ";
    cin >> pu;
    uu = cu - pu;
    cout << "Current units :: " << cu << endl;
    cout << "Previous units :: " << pu << endl;
    cout << "Used units :: " << uu << endl;
    if (uu < 0)
    {
        cout << "Invalid current used!" << endl;
    }
    else
    {

        if (uu >= 600)
        {
            cout << "Rate :: 60" <<endl;
            cout << "Bill :: " << uu * 60 << endl;
        }
        else if (uu >= 500 || uu < 600)
        {
            cout << "Rate :: 50" <<endl;
            cout << "Bill :: " << uu * 50 << endl;
        }
        else if (uu >= 400 || uu < 500)
        {
            cout << "Rate :: 40" <<endl;
            cout << "Bill :: " << uu * 40 << endl;
        }
        else if (uu > 0 || uu < 400)
        {
            cout << "Rate :: 30" <<endl;
            cout << "Bill :: " << uu * 30 << endl;
        }
        else
        {
        }
    }

    system("pause");
    return 0;
}