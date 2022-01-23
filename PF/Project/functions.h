#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <windows.h>
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

short n;
Data *ct = new Data[n];
const string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
string fname = "Nil";

//ProtoTyping so its possible to use every function in every other function
void i_data(Data **ct, short *n);
void o_data(Data *ct, short *n);
void o_file(Data *ct, short *n);
void i_file(Data **ct, short *n);
void gen_Table(Data *ct, Table tt[5][6], short *n);
void o_table(Table tt[5][6]);
void randomize_table(Table tt[5][6]);
void line(int num);
bool d_chk(Data *ct, short *n);
void wipe(Data *ct, short *n);
int menu_mod(Data *ct, short *n);
int s_chk(Data *ct, short *n);
void siz(short *n);

ifstream fin;
ofstream fout;
//Using WinApi and STD_Handle for colors
void color(int n)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, n);
}

//Database Input
void i_data(Data **ct, short *n)
{
    short inp;
    cout << "Input ::" << endl;
    cout << "Enter Number of Courses :: ";
    cin >> inp;
    *n = inp;
    fname = "Nil";
    Data *t = new Data[inp];
    cout << endl;
    cin.ignore();
    for (int i = 0; i < *n; i++)
    {
        cout << "Enter Course " << i + 1 << " :: ";
        getline(cin, t[i].c_name);
        cout << "Enter Credit Hours of " << t[i].c_name << " :: ";
        cin >> t[i].cr_h;
        cin.ignore();
        cout << "Enter Teacher for " << t[i].c_name << " :: ";
        getline(cin, t[i].t_name);
        cout << endl;
    }
    *ct = t;
    delete t;
    s_chk(*ct, n);
}

//Database Output
void o_data(Data *ct, short *n)
{
    cout << "Teacher \t Course \t C.Hrs" << endl;
    for (int i = 0; i < *n; i++)
    {
        cout << setw(17) << left << ct[i].t_name << setw(16) << left << ct[i].c_name << ct[i].cr_h << endl;
    }
}

//File Output
void o_file(Data *ct, short *n)
{
    cin.ignore();
    cout << "Enter File Name :: ";
    getline(cin, fname);
    fname += ".txt";
    fout.open(fname);
    if (fout.is_open())
    {
        color(10);
        cout << fname << " access granted!" << endl;
        cout << endl;
        color(15);
        for (int i = 0; i < *n; i++)
        {
            fout << ct[i].t_name << "\t" << ct[i].c_name << "\t" << ct[i].cr_h << endl;
        }
    }
    else
    {
        color(12);
        cout << "File access denied!" << endl;
        cout << endl;
        color(15);
    }
    fout.close();
}

//File Input
void i_file(Data **ct, short *n)
{
    cin.ignore();
    cout << "Enter File Name :: ";
    getline(cin, fname);
    fname += ".txt";
    siz(n);
    Data *t = new Data[*n];
    fin.open(fname, ios::in);
    if (fin.is_open())
    {
        color(10);
        cout << fname << " access granted!" << endl;
        cout << endl;
        color(15);
        for (int i = 0; i < *n; i++)
        {

            fin >> t[i].t_name;
            fin >> t[i].c_name;
            fin >> t[i].cr_h;
        }
    }
    else
    {
        color(12);
        cout << "File access denied!" << endl;
        cout << endl;
        color(15);
    }
    fin.close();
    *ct = t;
    delete t;
    cin.ignore();
}

//Generate Table
void gen_Table(Data *ct, Table tt[5][6], short *n)
{
    int c = 0;
    int cnt = 0;
    short tm = *n;
    tm -= 1;
    for (int i = 0; i < 5; i++)
    {
        if (c > tm)
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
                if (c > tm)
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
    cout << "TimeTable Generated!" << endl;
}

//Output Table
void o_table(Table tt[5][6])
{
    for (int i = 0; i < 5; i++)
    {
        cout << setw(10) << days[i] << setw(5) << "|";
        for (int j = 0; j < 6; j++)
        {
            cout << setw(17) << left << tt[i][j].block;
        }
        cout << endl;
        cout << setw(10) << "";
        cout << "|" << endl;
    }
}

//Randomized Time Table
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
    cout << "TimeTable Randomized!" << endl;
}

//Couts lines
void line(int num)
{
    for (int i = 0; i <= num; i++)
    {
        cout << "=";
    }
    cout << endl;
}

//checks whether the database is empty or full
bool d_chk(Data *ct, short *n)
{
    //siz(n);
    int chk = 0;
    for (int i = 0; i < *n; i++)
    {
        if (!ct[i].c_name.empty() && !ct[i].t_name.empty() && ct[i].cr_h != 0)
        {
            chk++;
        }
    }
    if (chk == *n && *n != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Outputing the Generated timetable to file
void t_o_file(Table tt[5][6])
{
    string tabname, temp_fname;
    temp_fname = fname;
    temp_fname.erase(temp_fname.find(".txt"), 4);
    cin.ignore();
    tabname += "TimeTable-" + temp_fname + ".csv";
    fout.open(tabname);
    if (fout.is_open())
    {
        color(10);
        cout << tabname << " generated Successfully!" << endl;
        cout << tabname << " access granted!" << endl;
        cout << endl;
        color(15);
        for (int i = 0; i < 5; i++)
        {
            fout << days[i] << ",";
            for (int j = 0; j < 6; j++)
            {
                fout << tt[i][j].block << ",";
            }
            fout << endl;
        }
        color(10);
        cout << "TimeTable Written Successfully to " << tabname << endl;
        color(15);
    }
    else
    {
        color(12);
        cout << "File access denied!" << endl;
        cout << endl;
        color(15);
    }
    fout.close();
}

//Wiping the data stored in database i.e struct
void wipe(Data *ct, short *n)
{
    if (!ct[0].c_name.empty() && !ct[0].t_name.empty() && ct[0].cr_h != 0)
    {
        for (int i = 0; i < *n; i++)
        {
            ct[i].c_name = "";
            ct[i].t_name = "";
            ct[i].cr_h = 0;
        }
        color(10);
        cout << "DataBase Wiped Successfully!" << endl;
        cout << endl;
        color(15);
    }
    else
    {
        color(12);
        cout << "DataBase Already Empty!" << endl;
        cout << endl;
        color(15);
    }
    fname = "Nil";
    *n = 0;
}

//modded menu using simple if-else and goto and flagging(for concepts)
int menu_mod(Data *ct, short *n)
{
    bool flip = 0;
    int opt = -1;
label1:
    if (opt == -1)
    {
        flip = 0;
    }
    else
    {
        flip = 1;
    }
    system("CLS");

    line(39);
    if (opt == 1)
    {
        color(10);
        cout << setw(39) << left << "> 1. Input Data to Database"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 1. Input Data to Database"
             << "|" << endl;
    }

    if (opt == 2)
    {
        color(10);
        cout << setw(39) << left << "> 2. Export Database To File"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 2. Export Database To File"
             << "|" << endl;
    }
    if (opt == 3)
    {
        color(10);
        cout << setw(39) << left << "> 3. Import Data From File to Database"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 3. Import Data From File to Database"
             << "|" << endl;
    }

    if (opt == 4)
    {
        color(10);
        cout << setw(39) << left << "> 4. Output Data Stored in Database"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 4. Output Data Stored in Database"
             << "|" << endl;
    }
    if (opt == 5)
    {
        color(10);
        cout << setw(39) << left << "> 5. Generate TimeTable"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 5. Generate TimeTable"
             << "|" << endl;
    }

    if (opt == 6)
    {
        color(10);
        cout << setw(39) << left << "> 6. Randomize TimeTable"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 6. Randomize TimeTable"
             << "|" << endl;
    }
    if (opt == 7)
    {
        color(10);
        cout << setw(39) << left << "> 7. OutPut TimeTable"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 7. OutPut TimeTable"
             << "|" << endl;
    }

    if (opt == 8)
    {
        color(10);
        cout << setw(39) << left << "> 8. Export TimeTable to File"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 8. Export TimeTable to File"
             << "|" << endl;
    }
    if (opt == 9)
    {
        color(10);
        cout << setw(39) << left << "> 9. WIPE DATABASE!"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(39) << left << "| 9. WIPE DATABASE!"
             << "|" << endl;
    }
    cout << setw(39) << left << "| 0. QUIT!"
         << "|" << endl;

    cout << setw(39) << left << "|"
         << "|" << endl;
    line(39);
    if (d_chk(ct, n) == true)
    {
        color(10);
        cout << setw(39) << left << "|> DATABASE_STATUS = FULL "
             << "|" << endl;
        if (fname == "Nil")
        {
            color(12);
            cout << "|> BACKEND_FILE = " << setw(21) << left << fname << "|" << endl;
        }
        else
        {
            color(10);
            cout << "|> BACKEND_FILE = " << setw(21) << left << fname << "|" << endl;
        }
        if (s_chk(ct, n) == 0 && *n == 0)
        {
            color(12);
            cout << "|> C_NUM_STATUS = " << setw(21) << left << *n << "|" << endl;
            cout << "|> C_HRS_STATUS = " << setw(21) << left << s_chk(ct, n) << "|" << endl;
        }
        else
        {
            color(10);
            cout << "|> C_NUM_STATUS = " << setw(21) << left << *n << "|" << endl;
            cout << "|> C_HRS_STATUS = " << setw(21) << left << s_chk(ct, n) << "|" << endl;
        }
    }
    else
    {
        color(12);
        cout << setw(39) << left << "|> DATABASE_STATUS = EMPTY"
             << "|" << endl;
        if (fname == "Nil")
        {
            color(12);
            cout << "|> BACKEND_FILE = " << setw(21) << left << fname << "|" << endl;
        }
        else
        {
            color(10);
            cout << "|> BACKEND_FILE = " << setw(21) << left << fname << "|" << endl;
        }
        if (s_chk(ct, n) == 0 && *n == 0)
        {
            color(12);
            cout << "|> C_NUM_STATUS = " << setw(21) << left << *n << "|" << endl;
            cout << "|> C_HRS_STATUS = " << setw(21) << left << s_chk(ct, n) << "|" << endl;
        }
        else
        {
            color(10);
            cout << "|> C_NUM_STATUS = " << setw(21) << left << *n << "|" << endl;
            cout << "|> C_HRS_STATUS = " << setw(21) << left << s_chk(ct, n) << "|" << endl;
        }
    }
    color(15);

    line(39);
    if (opt == -1 && flip == 0)
    {

        cout << endl;
        cout << "Enter Option :: ";
        cin >> opt;
        goto label1;
    }
    return opt;
}

int s_chk(Data *ct, short *n)
{
    int cr_sum = 0;
    for (int i = 0; i < *n; i++)
    {
        cr_sum += ct[i].cr_h;
    }
    // if (cr_sum > 30)
    // {
    //     color(12);
    //     cout << "Classes Cannot Fit in one Week!" << endl;
    //     color(15);
    // }
    // else
    // {
    //     color(10);
    //     cout << "Classes Can Fit in one Week!" << endl;
    //     color(15);
    // }
    return cr_sum;
}

void siz(short *n)
{
    int chk = 0;
    string garbage;
    fin.open(fname);

    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin >> garbage;
            chk++;
        }
    }
    fin.close();
    *n = chk / 3;
}
