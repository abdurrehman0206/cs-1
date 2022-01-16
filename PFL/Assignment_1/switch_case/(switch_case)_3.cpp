#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Marks (out of 100) :: ";
    cin >> a;

    switch (a / 10)
    {
    case 10:
    case 9:
    case 8:
        cout << "Grade :: A " << endl;
        break;
    case 7:
        cout << "Grade :: B " << endl;
        break;
    case 6:
        cout << "Grade :: C " << endl;
        break;
    case 5:
        cout << "Grade :: D " << endl;
        break;
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Grade :: F " << endl;
        break;
    default:
        cout << "Enter Correct Marks!" <<endl;
        break;
    }

    system("pause");
    return 0;
}