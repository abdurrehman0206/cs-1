#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
struct Data
{
    string t_name, c_name;
    short cr_h = 0;
};
struct Table
{
    string block;
};
void i_data(Data *ct, short *n);
void o_data(Data *ct, short *n);
void o_file(Data *ct, short *n);
void i_file(Data *ct, short *n);
void gen_Table(Data *ct, Table tt[5][6], short *n);
void o_table(Table tt[5][6]);
void randomize_table(Table tt[5][6]);
void line(int num);
int menu(Data *ct, short n);
bool d_chk(Data *ct, short n);

ifstream fin;
ofstream fout;

void i_data(Data *ct, short *n)
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
}

void o_data(Data *ct, short *n)
{
    cout << "Teacher \t Course \t C.Hrs" << endl;

    cout << endl;
    for (int i = 0; i < *n; i++)
    {
        cout << setw(17) << left << ct[i].t_name << setw(16) << left << ct[i].c_name << ct[i].cr_h << endl;
    }
}

void o_file(Data *ct, short *n)
{
    cin.ignore();
    string fname;
    cout << "Enter File Name :: ";
    getline(cin, fname);
    fname += ".txt";
    fout.open(fname, ios::ate | ios::app);
    if (fout.is_open())
    {
        cout << "File access granted!" << endl;
        cout << endl;
        for (int i = 0; i < *n; i++)
        {
            fout << ct[i].t_name << "\t" << ct[i].c_name << "\t" << ct[i].cr_h << endl;
        }
    }
    else
    {
        cout << "File access denied!" << endl;
        cout << endl;
    }

    fout.close();
}

void i_file(Data *ct, short *n)
{
    cin.ignore();
    string fname;
    cout << "Enter File Name :: ";
    getline(cin, fname);
    fname += ".txt";
    fin.open(fname, ios::in);
    if (fin.is_open())
    {
        cout << "File access granted!" << endl;
        cout << endl;
        for (int i = 0; i < *n; i++)
        {
            fin >> ct[i].t_name;
            fin >> ct[i].c_name;
            fin >> ct[i].cr_h;
        }
    }
    else
    {
        cout << "File access denied!" << endl;
        cout << endl;
    }

    fout.close();
}

void gen_Table(Data *ct, Table tt[5][6], short *n)
{
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

void o_table(Table tt[5][6])
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
    }
}

void line(int num)
{
    for (int i = 0; i <= num; i++)
    {
        cout << "=";
    }
    cout << endl;
}

int menu(Data *ct, short n)
{
    int opt;
    line(39);
    cout << setw(39) << left << "| 1. Input Data to Database"
         << "|" << endl;
    cout << setw(39) << left << "| 2. Write Inputted Data To File"
         << "|" << endl;
    cout << setw(39) << left << "| 3. Read Data From File to Database"
         << "|" << endl;
    cout << setw(39) << left << "| 4. Output Data Stored in Database"
         << "|" << endl;
    cout << setw(39) << left << "| 5. Generate TimeTable"
         << "|" << endl;
    cout << setw(39) << left << "| 6. Randomize TimeTable"
         << "|" << endl;
    cout << setw(39) << left << "| 7. OutPut TimeTable"
         << "|" << endl;
    cout << setw(39) << left << "| 8. Export TimeTable to File"
         << "|" << endl;
    cout << setw(39) << left << "| 0. QUIT!"
         << "|" << endl;
    if (d_chk(ct, n) == true)
    {
        cout << setw(39) << left << "| DATABASE_STATUS = FILLED"
             << "|" << endl;
    }
    else
    {
        cout << setw(39) << left << "| DATABASE_STATUS = EMPTY"
             << "|" << endl;
    }
    line(39);
    cout << endl;
    cout << "Enter Option :: ";
    cin >> opt;

    return opt;

    system("pause");
    system("CLS");
}

bool d_chk(Data *ct, short n)
{
    int chk = 0;
    for (int i = 0; i < n; i++)
    {
        if (!ct[i].c_name.empty() && !ct[i].t_name.empty() && ct[i].cr_h != 0)
        {
            chk++;
        }
    }
    if (chk == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}