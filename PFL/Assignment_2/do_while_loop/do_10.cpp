#include <iostream>

using namespace std;

int main()
{
    char ch;
    int i = 32;
    cout << "Printing ASCII table :: " << endl;
    do
    {
        ch = i;
        cout << i << " --> " << ch << endl;
        i++;
    } while (i <= 127);

    system("pause");
    return 0;
}