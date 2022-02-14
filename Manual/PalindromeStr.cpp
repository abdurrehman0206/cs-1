/* Write C++ Program to check the string is palindrome or Not */
#include <iostream>

using namespace std;

void display(char[]);

int main()
{
    int l = 0;
    bool flag = true;
    char str[] = "Wh o hW";
    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    l--;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str[l--])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }
    system("pause");
    return 0;
}

void display(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        cout << a[i];
    }
    cout << endl;
}