/*Write C++ Program to display marks of 5 students by passing one dimensional array to a function*/

#include <iostream>

using namespace std;

int display(int[]);

int main()
{

    int marks[] = {0, 1, 2, 3, 4, 5, 6};
    display(marks);
    system("pause");
    return 0;
}

int display(int a[7])
{
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}