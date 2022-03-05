#include <iostream>

using namespace std;

int main()
{
    int strln = 0;
    char str[100];
    char temp;
    cout << "Enter any string :: ";
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        strln++;
    }

    char *first = str;
    char *last = &str[strln - 1];

    for (int i = 0; i < strln / 2; i++)
    {
        temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
    cout << str << endl;

    system("pause");
    return 0;
}
