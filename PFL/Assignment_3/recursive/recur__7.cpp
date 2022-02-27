#include <iostream>

using namespace std;

int hcf(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    else
    {
        return hcf(n2, n1 % n2);
    }
}
int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter 2 numbers :: ";
    cin >> num1 >> num2;
    cout << "HCF :: " << hcf(num1, num2) << endl;
    system("pause");
    return 0;
}
