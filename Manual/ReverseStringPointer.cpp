#include <iostream>

using namespace std;

void rev(char *p)
{

    int strln = 0;
    char temp;
    char *start, *end;
    start = p;
    end = (p - 1);
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        strln++;
        end++;
    }
    for (int i = 0; i < (strln / 2); i++)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{

    char s[100] = "";
    char *ps;
    ps = s;

    cout << " Enter a string :: ";
    gets(s);

    cout << "_Original Output_" << endl;
    for (int i = 0; *ps != '\0'; i++)
    {
        cout << *ps;
        ps++;
    }
    cout << endl;
    ps = s; // reassigning

    rev(s);
    cout << "_After Reverse Output_" << endl;
    for (int i = 0; *ps != '\0'; i++)
    {
        cout << *ps;
        ps++;
    }
    cout << endl;

    system("pause");
    return 0;
}
