#include <iostream>
using namespace std;

int main()
{
    int hr, opt, wage;
    cout << "Enter Work Hours :: ";
    cin >> hr;
    cout << "\n1-Apply $20/h !" << endl;
    cout << "2-Apply $30/h !" << endl;
    cout << "3-Apply $40/h !" << endl;
    cout << "4-Apply $50/h !\n"<< endl;

    cout << "Enter Option :: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        cout << "WorkHours :: " << hr << endl;
        cout << "Total :: $" << hr * 20 << endl;
        break;
    case 2:
        cout << "WorkHours :: " << hr << endl;
        cout << "Total :: $" << hr * 30 << endl;
        break;
    case 3:
        cout << "WorkHours :: " << hr << endl;
        cout << "Total :: $" << hr * 40 << endl;
        break;
    case 4:
        cout << "WorkHours :: " << hr << endl;
        cout << "Total :: $" << hr * 50 << endl;
        break;
    default:
        cout << "Enter valid option!" << endl;
        break;
    }

    system("pause");
    return 0;
}