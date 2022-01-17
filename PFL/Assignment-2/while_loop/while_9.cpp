#include <iostream>

using namespace std;

int main()
{
    int start, end, i;
    cout << "Enter Range Start :: ";
    cin >> start;
    cout << "Enter Range End :: ";
    cin >> end;
    i = start;
    cout << "Range :: "<< "(" << start << "," << end << ")" << endl;
    while (i >= start && i <= end)
    {
        if (i % 2 == 0)
        {
            cout << i << " is Even!" << endl;
        }
        else
        {
            cout << i << " is Odd!" << endl;
        }
        i++;
    }

    system("pause");
    return 0;
}