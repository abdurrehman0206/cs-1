#include <iostream>

using namespace std;

int main()
{
    int num1, num2, max;

    cout << "Enter 1st number ::";
    cin >> num1;
    cout << "Enter 2nd number ::";
    cin >> num2;

    max = (num1 > num2) ? num1 : num2;

    do
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "LCM :: " << max << endl;
            break;
        }
        else
        {
            max++;
        }
    } while (true);

    system("pause");
    return 0;
}