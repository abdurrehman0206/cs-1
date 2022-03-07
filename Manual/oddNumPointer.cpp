#include <iostream>

using namespace std;

int main()
{

    int a[] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    int *p;
    p = a; // assign pointer the array address

    cout << "_ODD VALUES_" << endl;
    for (int i = 0; i < 16; i++)
    {
        if (*p % 2 != 0)
        {
            cout << *p << " "; // print the value at *p same as a[i]
        }
        p++; // increment the pointer to next address of array
    }

    system("pause");
    return 0;
}
