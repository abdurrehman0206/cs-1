#include <iostream>

using namespace std;

struct Student
{
    string fname, sname;
    float gpa;
    int id;
};

void input(Student s[]);
void output(Student s[]);
void sortGPA(Student s[]);
void sortFname(Student s[]);
void sortSname(Student s[]);
void swap(Student &a, Student &b);

int main()
{
    Student s[5];

    input(s);

    cout << "_UnSorted Data_" << endl;
    output(s);
    cout << "_GPA Sorted Data_" << endl;
    sortGPA(s);
    output(s);
    cout << "_First Name Sorted Data_" << endl;
    sortFname(s);
    output(s);
    cout << "_Last Name Sorted Data_" << endl;
    sortSname(s);
    output(s);

    system("pause");
    return 0;
}

void input(Student s[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Student " << i + 1 << " first name :: ";
        getline(cin, s[i].fname);
        cout << "Enter Student " << i + 1 << " last name :: ";
        getline(cin, s[i].sname);
        cout << "Enter Student " << i + 1 << " GPA :: ";
        cin >> s[i].gpa;
        s[i].id = i + 1;
        cin.ignore();
    }
}

void output(Student s[])
{
    cout << endl;
    cout << "First name\tLast Name\tID\tGPA" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << s[i].fname << "\t\t" << s[i].sname << "\t\t" << s[i].id << "\t" << s[i].gpa << endl;
    }
    cout << endl;
}

void sortGPA(Student s[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (s[j].gpa > s[i].gpa)
            {
                swap(s[j], s[i]);
            }
        }
    }
}

void sortSname(Student s[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (s[j].sname < s[i].sname)
            {
                swap(s[j], s[i]);
            }
        }
    }
}

void sortFname(Student s[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (s[j].fname < s[i].fname)
            {
                swap(s[j], s[i]);
            }
        }
    }
}

void swap(Student &a, Student &b)
{
    Student temp;
    temp = a;
    a = b;
    b = temp;
}