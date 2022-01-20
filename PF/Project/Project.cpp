#include <iostream>
#include <fstream>
#include <string>
#include "Func.h"
using namespace std;

int main()
{
    const string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int hours, c_num;
    cout << "Enter Number of Courses :: ";
    cin >> c_num;
    // cout << "Number of Hours :: ";
    // cin >> hours;
    string co_te_ch[c_num][2]; // 0 = Course Name , 1 = Teacher Name , 2 = Credit Hours
    string table[5][6]; 
    // string courses[c_num];
    // string teachers[t_num];
    // c_input(courses, &c_num);
    // t_input(teachers,courses,&c_num); 
    //cout << co_te[1][1] << "\t" << co_te[1][0];
    ct_input(co_te_ch, &c_num);
    cout << endl;
    ct_output(co_te_ch, &c_num);


    system("pause");
    return 0;
}
