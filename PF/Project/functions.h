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

struct Table
{
    string block;
};

ifstream fin;
ofstream fout;

void nullify(bool chk[5][6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            chk[i][j] = 0;
        }
    }
}

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

void o_file(Data *ct, short *n)
{
    fout.open("data.txt", ios::ate | ios::app);
    for (int i = 0; i < *n; i++)
    {
        fout << ct[i].t_name << "\t" << ct[i].c_name << "\t" << ct[i].cr_h << endl;
    }
    fout.close();
}

void i_file(Data *ct, short *n)
{
    fin.open("data.txt", ios::in);
    for (int i = 0; i < *n; i++)
    {
        //getline(fin, ct[i].t_name);
        fin >> ct[i].t_name;
        fin >> ct[i].c_name;
        fin >> ct[i].cr_h;
    }
}

void gen_Table(Data *ct, Table tt[5][6], bool chk[5][6], short *n)
{
    fout.open("table.txt", ios::out);
    int c = 0;
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        if (c > 5)
        {
            break;
        }
        for (int j = 0; j < 6; j++)
        {
            if (cnt < ct[c].cr_h)
            {
                tt[i][j].block = ct[c].c_name + "|" + ct[c].t_name;
                cnt++;
            }
            else if (cnt >= ct[c].cr_h)
            {
                c++;
                if (c > 5)
                {
                    break;
                }
                cnt = 0;
            }
        }
    }
}
void add_Break(Table tt[5][6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (tt[i][j].block == "")
            {
                tt[i][j].block = "Tutorial";
            }
        }
    }
}

void t_output(Table tt[5][6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << setw(17) << left << tt[i][j].block;
        }
        cout << endl;
    }
}

void randomize_table(Table tt[5][6])
{
    int rn;
    string temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            rn = (rand() % 4) + 1;
            temp = tt[j][i].block;
            tt[j][i].block = tt[rn][i].block;
            tt[rn][i].block = temp;
        }
        cout << endl;
    }
}