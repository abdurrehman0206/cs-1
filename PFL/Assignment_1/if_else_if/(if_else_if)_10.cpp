#include <iostream>
using namespace std;

int main()
{

    float pay;
    cout << "Enter amount to be payed in $ :: ";
    cin >> pay;

    if (pay <= 200)
    {
        cout << "No Discount!" << endl;
        cout << "To Be Paid :: " << pay << "$" << endl;
    }
    else if (pay > 200 && pay <= 400)
    {
        cout << "Discount Applied! 10% off " << endl;
        cout << "Discount :: " << ((pay * 10) / 100) << endl;
        cout << "To Be Paid :: " << pay - ((pay * 10) / 100) << endl;
    }
    else if (pay > 400 && pay <= 600)
    {
        cout << "Discount Applied! 15% off " << endl;
        cout << "Discount :: " << ((pay * 15) / 100) << endl;
        cout << "To Be Paid :: " << pay - ((pay * 15) / 100) << endl;
    }
    else if (pay > 600)
    {
        cout << "Discount Applied! 20% off " << endl;
        cout << "Discount :: " << ((pay * 20) / 100) << endl;
        cout << "To Be Paid :: " << pay - ((pay * 20) / 100) << endl;
    }
    else
    {
        cout << "Please enter valid amount!" << endl;
    }

    system("pause");
    return 0;
}