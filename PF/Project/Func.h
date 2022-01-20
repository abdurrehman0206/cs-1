#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// void c_input(string courses[],int *c_num){
//     cout << "Input courses ::" << endl;
//     for(int i=0; i < *c_num;i++){
//         cout << "Enter Course " << i + 1 << " :: ";
//         getline(cin, courses[i]);
//     }
// }

// void t_input(string teachers[],string courses[], int *c_num){
//     cout << "Input Teachers ::" << endl;
//     for(int i=0; i < *c_num;i++){
//         cout << "Enter Teacher for "<< courses[i] << " :: ";
//         getline(cin, teachers[i]);
//     }

// }

void ct_input(string co_te_ch[][2], int *c_num)
{
    cin.ignore();
    for (int i = 0; i < *c_num; i++)
    {
        cout << "Enter Course " << i + 1 << " :: ";
        getline(cin, co_te_ch[i][0]);
        cout << "Enter Teacher for " << co_te_ch[i][0] << " :: ";
        getline(cin, co_te_ch[i][1]);
        cout << endl;
    }
    system("pause");
    system("CLS");
}

void ct_output(string co_te_ch[][2], int *c_num)
{
    cout << "Course \t Teacher" << endl;
    cout << endl;
    for (int i = 0; i < *c_num; i++)
    {
        cout << co_te_ch[i][0] << " \t " << co_te_ch[i][1];
        cout << endl;
    }
    system("pause");
    system("CLS");
}

void designTable(string co_te_ch[][2], string table[5][6], int *c_num)
{

    for (int i = 0; i < *c_num; i++)
    {
        for (int j = 0; j < 6; j++)
        {

        }
    }
}