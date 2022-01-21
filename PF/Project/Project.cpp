#include "functions.h"

int main()
{
    bool chk[5][6];
    nullify(chk);
    short n=6;
    //cout << "Input Number of Courses :: ";
    //cin >> n;
    system("CLS");
    Data ct[n];
    Table tt[5][6];
    //d_input(ct,&n);
    
    //o_file(ct, &n);
    i_file(ct, &n);
    //d_output(ct,&n);
    gen_Table(ct, tt, chk, &n);
    add_Break(tt);
    t_output(tt);
    cout << endl
         << endl;
    randomize_table(tt);
    t_output(tt);
    cout << endl
         << endl;
    randomize_table(tt);
    t_output(tt);
    cout << endl
         << endl;
    randomize_table(tt);
    t_output(tt);
    cout << endl
         << endl;
    randomize_table(tt);
    t_output(tt);
    system("pause");
    return 0;
}
