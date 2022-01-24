#include "functions.h"

int main()
{
    int opt;
    char yn;
    
    
    do
    {

        opt = mod_menu(ct, &n);
        cout << endl
             << endl;
        switch (opt)
        {
        default:
            cout << "Please Input Correct Option!" << endl;
            system("pause");
            system("CLS");
            break;
        case 10:
            cout << "Local DataBase will be lost!" << endl;
            cout << "Are you sure you want to QUIT![y|Y] :: ";
            cin >> yn;
            if (yn == 'y' || yn == 'Y')
            {
                exit(0);
            }
            break;
        case 1:
            i_data(&ct, &n);
            system("pause");
            system("CLS");
            break;
        case 2:
            o_file(ct, &n);
            system("pause");
            system("CLS");
            break;
        case 3:
            i_file(&ct, &n);
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
            t_o_file(tt);
            system("pause");
            system("CLS");
            break;
        case 9:
            wipe(ct, &n);
            system("pause");
            system("CLS");
            break;
        }
    } while (true);
    delete[] ct;
    system("pause");
    return 0;
}
