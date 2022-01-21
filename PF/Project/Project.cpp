#include "functions.h"

int main()
{
    int opt;
    short n = 6;
    Data ct[n];
    Table tt[5][6];

    do
    {
        opt = menu(ct,n);
        cout << endl
             << endl;
        cout << d_chk(ct, n);
        switch (opt)
        {
        default:
            cout << "Please Input Correct Option!" << endl;
            system("pause");
            system("CLS");
            break;
        case 0:
            exit(0);
            break;
        case 1:
            i_data(ct, &n);
            system("pause");
            system("CLS");
            break;
        case 2:
            o_file(ct, &n);
            system("pause");
            system("CLS");
            break;
        case 3:
            i_file(ct, &n);
            system("pause");
            system("CLS");
            break;
        case 4:
            o_data(ct, &n);
            system("pause");
            system("CLS");
            break;
        case 5:
            gen_Table(ct, tt, &n);
            system("pause");
            system("CLS");
            break;
        case 6:
            randomize_table(tt);
            system("pause");
            system("CLS");
            break;
        case 7:
            o_table(tt);
            system("pause");
            system("CLS");
            break;
        case 8:
            break;
        }
    } while (true);

    system("pause");
    return 0;
}
