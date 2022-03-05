#include <iostream>

using namespace std;

int main()
{

    char str[20];
    gets(str);
    int strln = 0;
    char temp;
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        strln++;
    }

    for (int i = strln - 1; i >= strln / 2; i--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
    }
    cout << "After " << endl;
    cout << str << endl;
    system("pause");
    return 0;
}