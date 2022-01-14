#include <iostream>
using namespace std;

int main()
{
    int i, j, cnt = 0;
    int size;
    cout << "Enter size :: ";
    cin >> size;
    for (i = 1; i <= size * 2; i++)
    {

        if (i <= size)
        {
            cnt = i;
        }
        else
        {
            cnt--;
        }
        for (j = 1; j <= cnt; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
