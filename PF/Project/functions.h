#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct Data
{
    string t_name, c_name;
    short cr_h;
};

void d_input(Data *ct, short *n)
{
    
    cout << "Input ::" << endl;
    cout << endl;
    cin.ignore();
    for (int i = 0; i < *n; i++)
    {
        cout << "Enter Course " << i + 1 << " :: ";
        getline(cin, ct[i].c_name);
        cout << "Enter Credit Hours of " << ct[i].c_name << " :: ";
        cin >> ct[i].cr_h;
        cin.ignore();
        cout << "Enter Teacher for " << ct[i].c_name << " :: ";
        getline(cin, ct[i].t_name);
        cout << endl;
    }
    system("pause");
    system("CLS");
}

void d_output(Data *ct, short *n)
{
    cout << "Teacher \t Course \t C.Hrs" << endl;
 
    cout << endl;
    for (int i = 0; i < *n; i++)
    {
        cout << setw(17) << left << ct[i].t_name << setw(16) << left << ct[i].c_name << ct[i].cr_h << endl;
    }
    system("pause");
    system("CLS");
}
