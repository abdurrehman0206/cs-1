#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;



int main()
{
    short n;
    cout << "Input Number of Courses :: ";
    cin >> n;
    system("CLS");
    Data ct[n];
    d_input(ct,&n);
    d_output(ct,&n);

    system("pause");
    return 0;
}
