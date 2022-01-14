#include <iostream>
using namespace std;

int main()
{
    
    int size, tmpsize;
    cout << "Enter size :: ";
    cin >> size;
    tmpsize = size;

    for (int i = 1; i <= size; i++)
    {

        for (int x = 0; x < tmpsize; x++)
        {
            cout << " ";
        }
        tmpsize--;
        for (int j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}