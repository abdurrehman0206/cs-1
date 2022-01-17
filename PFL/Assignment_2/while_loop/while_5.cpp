#include <iostream>
using namespace std;

int main()
{

    int size, tmpsize, i = 1, x = 0, j = 1;
    cout << "Enter size :: ";
    cin >> size;
    tmpsize = size;
    while (i <= size)
    {
        x = 0;
        while (x < tmpsize)
        {
            cout << " ";
            x++;
        }
        tmpsize--;
        j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    system("pause");
    return 0;
}