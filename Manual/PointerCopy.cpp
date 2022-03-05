#include <iostream>

using namespace std;

void copy(char *p, char *pc)
{
    for (int i = 0; *p != '\0'; i++)
    {
        *pc = *p;
        p++;
        pc++;
    }
}

int main()
{
    char str1[50] = "";
    char str2[50] = "";
    cout << "Enter a string :: ";
    gets(str1);
    copy(str1, str2);
    cout << str1 << endl;
    cout << str2 << endl;
    system("pause");
    return 0;
}
