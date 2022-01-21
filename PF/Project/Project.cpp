#include "functions.h"

int main()
{
    short n;
    cout << "Input Number of Courses :: ";
    cin >> n;
    system("CLS");
    Data ct[n];
    //d_input(ct,&n);
    
    //o_file(ct, &n);
    i_file(ct, &n);
    d_output(ct,&n);
    system("pause");
    return 0;
}
