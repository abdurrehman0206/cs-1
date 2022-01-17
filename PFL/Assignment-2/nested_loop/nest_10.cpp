#include <iostream>

using namespace std;

int main()
{
    char ch;
    int tab[95];
    for (int i = 0; i <= 95; i++)
    {
        tab[i] = i + 32;
    }
    cout << "_____OUTPUT_____" << endl<< endl;
    cout << "Decimal\t\tChar" << endl;
    for (int i = 0; i < 95; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                cout << tab[i] << "\t\t";
            }
            else
            {
                ch = tab[i];
                cout << ch << " ";
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}