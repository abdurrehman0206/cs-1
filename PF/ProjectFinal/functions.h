#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
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
Table tt[5][7];
const string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
const string time_slot[] = {"9:00", "10:00", "11:00", "12:00", "1:00", "2:00", "3:00"};
string fname = "Nil";
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
ifstream fin;
ofstream fout;

//ProtoTyping so its possible to use every function in every other function
void i_data(Data **ct, short *n);
void o_data(Data *ct, short *n);
void o_file(Data *ct, short *n);
void i_file(Data **ct, short *n);
void gen_Table(Data *ct, Table tt[5][7], short *n);
void o_table(Table tt[5][7]);
void randomize_table(Table tt[5][7]);
void line(int num);
bool d_chk(Data *ct, short *n);
void wipe(Data *ct, short *n);
int mod_menu(Data *ct, short *n);
int s_chk(Data *ct, short *n);
void siz(short *n);
int selection();

//Using WinApi and STD_Handle for colors
void color(int n)
{
    SetConsoleTextAttribute(console, n);
}

void g_xy(int x, int y)
{
    COORD cp;
    cp.X = x;
    cp.Y = y;
    SetConsoleCursorPosition(console, cp);
}

//Database Input
void i_data(Data **ct, short *n)
{
    short inp;
    cout << "Input ::" << endl;
    cout << "Enter Number of Courses :: ";
    cin >> inp;
    if (inp == 0)
    {
        return;
    }
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
    cin.ignore();
}

//File Input
void i_file(Data **ct, short *n)
{
    //cin.ignore();
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
void gen_Table(Data *ct, Table tt[5][7], short *n)
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
        for (int j = 0; j < 7; j++)
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
        for (int j = 0; j < 7; j++)
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
void o_table(Table tt[5][7])
{
    cout << setw(18) << "";
    for (int i = 0; i < 7; i++)
    {
        cout << setw(17) << left << time_slot[i];
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(10) << days[i] << setw(6) << "|";
        for (int j = 0; j < 7; j++)
        {
            cout << setw(17) << left << tt[i][j].block;
        }
        cout << endl;
        cout << setw(10) << "";
        cout << "|" << endl;
    }
}

//Randomized Time Table
void randomize_table(Table tt[5][7])
{
    int rn;
    string temp;
    for (int i = 0; i < 7; i++)
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
void t_o_file(Table tt[5][7])
{
    string tabname, temp_fname;
    temp_fname = fname;
    temp_fname.erase(temp_fname.find(".txt"), 4);

    tabname += "TimeTable-" + temp_fname + ".csv";
    fout.open(tabname);
    if (fout.is_open())
    {
        color(10);
        cout << tabname << " generated Successfully!" << endl;
        cout << tabname << " access granted!" << endl;
        cout << endl;
        color(15);
        fout << ",";
        for (int i = 0; i < 7; i++)
        {
            fout << time_slot[i] << ",";
        }
        fout << endl;
        for (int i = 0; i < 5; i++)
        {
            fout << days[i] << ",";
            for (int j = 0; j < 7; j++)
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
    cin.ignore();
}

//Wiping the data stored in database i.e struct
void wipe(Data *ct, short *n)
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
    fname = "Nil";
    *n = 0;
}

int s_chk(Data *ct, short *n)
{
    int cr_sum = 0;
    for (int i = 0; i < *n; i++)
    {
        cr_sum += ct[i].cr_h;
    }
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

//modded menu using simple if-else and goto and flagging(for concepts)
int mod_menu(Data *ct, short *n)
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

    line(43);
    if (opt == 1)
    {
        color(10);
        cout << setw(43) << left << "> Input Data to Database"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Input Data to Database"
             << "|" << endl;
    }

    if (opt == 2)
    {
        color(10);
        cout << setw(43) << left << "> Export Database To File"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Export Database To File"
             << "|" << endl;
    }
    if (opt == 3)
    {
        color(10);
        cout << setw(43) << left << "> Import Data From File to Database"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Import Data From File to Database"
             << "|" << endl;
    }

    if (opt == 4)
    {
        color(10);
        cout << setw(43) << left << "> Output Data Stored in Database"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Output Data Stored in Database"
             << "|" << endl;
    }
    if (opt == 5)
    {
        color(10);
        cout << setw(43) << left << "> Generate TimeTable"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Generate TimeTable"
             << "|" << endl;
    }

    if (opt == 6)
    {
        color(10);
        cout << setw(43) << left << "> Randomize TimeTable"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Randomize TimeTable"
             << "|" << endl;
    }
    if (opt == 7)
    {
        color(10);
        cout << setw(43) << left << "> OutPut TimeTable"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| OutPut TimeTable"
             << "|" << endl;
    }

    if (opt == 8)
    {
        color(10);
        cout << setw(43) << left << "> Export TimeTable to File"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| Export TimeTable to File"
             << "|" << endl;
    }
    if (opt == 9)
    {
        color(10);
        cout << setw(43) << left << "> WIPE DATABASE!"
             << "<" << endl;
        color(15);
    }
    else
    {
        cout << setw(43) << left << "| WIPE DATABASE!"
             << "|" << endl;
    }
    cout << setw(43) << left << "| QUIT!"
         << "|" << endl;

    cout << setw(43) << left << "|"
         << "|" << endl;
    line(43);
    if (d_chk(ct, n) == true)
    {
        color(10);
        cout << setw(43) << left << "| DATABASE_STATUS = FULL "
             << "|" << endl;
    }
    else
    {
        color(12);
        cout << setw(43) << left << "| DATABASE_STATUS = EMPTY"
             << "|" << endl;
    }

    if (fname == "Nil")
    {
        color(12);
        cout << "| BACKEND_FILE = " << setw(26) << left << fname << "|" << endl;
    }
    else
    {
        color(10);
        cout << "| BACKEND_FILE = " << setw(26) << left << fname << "|" << endl;
    }
    if (s_chk(ct, n) == 0 && *n == 0)
    {
        color(12);
        cout << "| C_NUM_STATUS = " << setw(26) << left << *n << "|" << endl;
        cout << "| C_HRS_STATUS = " << setw(26) << left << s_chk(ct, n) << "|" << endl;
    }
    else
    {
        color(10);
        cout << "| C_NUM_STATUS = " << setw(26) << left << *n << "|" << endl;
        cout << "| C_HRS_STATUS = " << setw(26) << left << s_chk(ct, n) << "|" << endl;
    }
    color(15);

    line(43);
    if (opt == -1 && flip == 0)
    {
        opt = selection();
        goto label1;
    }
    return opt;
}

int selection()
{

    unsigned int pos = 0, y = 0;
    int opt = -1;
    g_xy(36, 0);
    char c;
    while (true)
    {
        color(12);
        system("pause>nul");

        if (GetAsyncKeyState(VK_DOWN) && y <= 10)
        {
            g_xy(36, y);
            if (y == 0)
            {
                color(15);
                cout << "====";
                color(12);
            }
            else
            {
                cout << "    ";
            }
            y++;
            g_xy(36, y);
            cout << "<===";
            pos++;
            continue;
        }
        if (GetAsyncKeyState(VK_UP) && y > 1)
        {

            g_xy(36, y);
            cout << "    ";
            y--;
            g_xy(36, y);
            cout << "<===";
            pos--;
            continue;
        }

        if (GetAsyncKeyState(VK_RETURN))
        {
            color(15);
            switch (pos)
            {

            default:
            {
                break;
            }

            case 1:
            {
                opt = 1;
                return opt;
                break;
            }

            case 2:
            {

                opt = 2;
                return opt;
                break;
            }

            case 3:
            {
                opt = 3;
                return opt;
                break;
            }

            case 4:
            {
                opt = 4;
                return opt;
                break;
            }
            case 5:
            {
                opt = 5;
                return opt;
                break;
            }
            case 6:
            {
                opt = 6;
                return opt;
                break;
            }
            case 7:
            {
                opt = 7;
                return opt;
                break;
            }
            case 8:
            {
                opt = 8;
                return opt;
                break;
            }
            case 9:
            {
                opt = 9;
                return opt;
                break;
            }
            case 10:
            {
                opt = 10;
                return opt;
                break;
            }
            }
        }
    }
    return opt;
}
