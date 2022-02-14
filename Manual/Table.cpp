/*Write a C++ program that inputs a number and pass that number to the 
function. The function display the table of a given number.*/

#include <iostream>

using namespace std;

void table(int);

int main()
{
    int num = 0;
    cout << "Enter a number ::";
    cin >> num;
    table(num);
    system("pause");
    return 0;
}

void table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}