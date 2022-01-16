#include <iostream>
using namespace std;

int main()
{
    int opt;
    float tbp;
    cout << "Enter To Be Paid :: $";
    cin >> tbp;
    cout << "\n1-Apply 5% Discount!" << endl;
    cout << "2-Apply 10% Discount!" << endl;
    cout << "3-Apply 15% Discount!" << endl;
    cout << "4-Apply 20% Discount!\n"<< endl;

    cout << "Enter Option :: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        cout << "To Be Paid :: $" << tbp << endl;
        cout << "Discount :: $" << ((tbp * 5) / 100) << endl;
        cout << "New Total :: $" << (tbp - ((tbp * 5) / 100)) << endl;
        break;
    case 2:
        cout << "To Be Paid :: $" << tbp << endl;
        cout << "Discount :: $" << ((tbp * 10) / 100) << endl;
        cout << "New Total :: $" << (tbp - ((tbp * 10) / 100)) << endl;
        break;
    case 3:
        cout << "To Be Paid :: $" << tbp << endl;
        cout << "Discount :: $" << ((tbp * 15) / 100) << endl;
        cout << "New Total :: $" << (tbp - ((tbp * 15) / 100)) << endl;
        break;
    case 4:
        cout << "To Be Paid :: $" << tbp << endl;
        cout << "Discount :: $" << ((tbp * 20) / 100) << endl;
        cout << "New Total :: $" << (tbp - ((tbp * 20) / 100)) << endl;
        break;
    default:
        cout << "Enter valid option!" << endl;
        break;
    }

    system("pause");
    return 0;
}