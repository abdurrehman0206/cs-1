#include <iostream>
using namespace std;

int main()
{
    int opt;
    cout << "1-Student " << endl;
    cout << "2-Teacher " << endl;
    cout << "3-Manager \n"<< endl;
    cout << "Enter Option :: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        cout << "Class :: Student" << endl;
        cout << "Redirecting to student section....." << endl;
        cout << "Roles :: Read , Submit" << endl;
        break;
    case 2:
        cout << "Class :: Teacher" << endl;
        cout << "Redirecting to Teacher section....." << endl;
        cout << "Roles :: Write , Read , Submit , Create , Kick" << endl;
        break;
    case 3:
        cout << "Class :: Manager" << endl;
        cout << "Redirecting to Manager section....." << endl;
        cout << "Roles :: Write , Read , Delete , Create , Submit , Ban , UnBan" << endl;
        break;
    default:
        cout << "Enter valid option!" << endl;
        break;
    }

    system("pause");
    return 0;
}