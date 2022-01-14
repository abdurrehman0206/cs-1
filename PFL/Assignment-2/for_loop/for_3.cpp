#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, smallest, hcf;

    cout << "Enter 1st number ::";
    cin >> num1;
    cout << "Enter 2nd number ::";
    cin >> num2;
    cout << "Enter 3rd number ::";
    cin >> num3;

    smallest = ((num1 < num2) ? ((num1 < num3) ? (num1) : (num3)) : ((num2 < num3) ? (num2) : (num3)));
                                                                                

    for (int i = 1; i <= smallest; i++)
    {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF :: " << hcf << endl;

    system("pause");
    return 0;
}