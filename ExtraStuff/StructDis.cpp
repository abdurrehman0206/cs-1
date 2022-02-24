#include <iostream>

using namespace std;

struct dis
{
    int feet;
    float inches;
};

void input(dis &);
void correction(dis &);
void output(dis &);
dis sum(dis &, dis &);

int main()
{

    dis d1, d2, d3;
    input(d1);
    input(d2);
    cout << "Distance 1 :: ";
    output(d1);
    cout << "Distance 2 :: ";
    output(d2);
    d3 = sum(d1, d2);
    cout << "Sum :: ";
    output(d3);

    system("pause");
    return 0;
}

void input(dis &d)
{

    cout << "Enter distance in Feet :: ";
    cin >> d.feet;
    cout << "Enter distance in Inches :: ";
    cin >> d.inches;
    correction(d);
}

void correction(dis &d)
{
    while (d.inches >= 12)
    {
        d.inches -= 12;
        d.feet++;
    }
}

void output(dis &d)
{
    cout << d.feet << "\'"
         << "-" << d.inches << "\''" << endl
         << endl;
}

dis sum(dis &da, dis &db)
{
    dis d;
    d.feet = da.feet + db.feet;
    d.inches = da.inches + db.inches;
    return d;
}