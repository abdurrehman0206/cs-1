#include <iostream>

using namespace std;

void IsPali(char *p)
{
    int strln = 0;
    char *pt = p;
    bool flag = 1;
    for (int i = 0; *pt != '\0'; i++)
    {
        strln++;
        *pt++;
    }
    *pt--;
    for (int i = 0; i < strln / 2; i++)
    {
        if (*p != *pt)
        {
            flag = 0;
            break;
        }
        p++;
        pt--;
    }
    if (flag == 1)
    {
        cout << "Is Palindrome " << endl;
    }
    else
    {
        cout << "Not Palindrome " << endl;
    }
}

int main()
{

    char str[100];
    cout << "Enter a string :: ";
    gets(str);
    IsPali(str);

    system("pause");
    return 0;
}
