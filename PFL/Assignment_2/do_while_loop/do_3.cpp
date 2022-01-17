#include <iostream>
using namespace std;

int main()
{
    float tea = 1.99, cake = 3.99, coffee = 2.49, croissant = 5.99, tax, total = 0;
    int rank, opt;
    char chk;
    cout << "1-->Student" << endl;
    cout << "2-->Teacher" << endl;
    cout << "3-->Guest" << endl
         << endl;
    cout << "Enter Rank ::";
    cin >> rank;

    switch (rank)
    {
    case 1:
        tax = 0.29;
        break;
    case 2:
        tax = 0.39;
        break;
    case 3:
        tax = 0.49;
        break;
    }
    do
    {
        system("CLS");
        cout << "1-->Tea--> $" << tea << endl;
        cout << "2-->Cake--> $" << cake << endl;
        cout << "3-->Coffee--> $" << coffee << endl;
        cout << "4-->Croissant--> $" << croissant << endl
             << endl;
        cout << "Enter Option ::";
        cin >> opt;
        switch (opt)
        {
        case 1:
            total += tea + tax;
            break;
        case 2:
            total += cake + tax;
            break;
        case 3:
            total += coffee + tax;
            break;
        case 4:
            total += croissant + tax;
            break;
        default:
            cout << "Please Select Correct Option!" << endl;
            break;
        }
        cout << endl
             << "Do you wish to continue buying [y|Y] :: " << endl;
        cin >> chk;

    } while (chk == 'Y' || chk == 'y');
    system("CLS");
    cout << endl;
    cout << "Your tax Bracket is $" << tax << endl;
    cout << "Your Total is $" << total << endl;
    system("pause");
    return 0;
}
