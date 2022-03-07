#include <iostream>

using namespace std;

void insert(char *p)
{
    int index = -1, strln = 0;
    char temp, add;
    char *current = p, *next = p;
    cout << "Enter index to insert at :: ";
    cin >> index;
    cout << "Enter a character to insert :: ";
    cin >> add;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        strln++;
    }
    *(p + strln) = add;
    current += (strln - 1);
    next += strln;
    for (int i = index; i < strln; i++)
    {
        temp = *current;
        *current = *next;
        *next = temp;
        current--;
        next--;
    }
}

int main()
{
    char s[100] = "";
    char *ps;
    ps = s;
    cout << "Enter a string :: ";
    gets(s);
    cout << "Original String :: " << s << endl;
    insert(s);
    cout << "Modified String :: " << s << endl;
    system("pause");
    return 0;
}
