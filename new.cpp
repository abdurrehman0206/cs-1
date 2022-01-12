#include <iostream>
using namespace std;

void sum();

int main()
{
    sum();
    system("pause");
    return 0;
}


void sum(){
    int num1, num2 ,sum;
    cout << "Enter 1st Number :: ";
    cin >>num1;
    cout << "Enter 2nd Number :: ";
    cin >>num2;
    sum = num1 + num2;
    cout << "Sum :: " << sum << endl;
}


