#include <iostream>

using namespace std;

int main()
{
    char ch;
    int i = 32;
    cout << "Printing ASCII table :: " << endl;
    while (i <= 127)
    {
        ch = i;
        cout << i << " --> " << ch << endl;
        i++;
    }

    system("pause");
    return 0;
}