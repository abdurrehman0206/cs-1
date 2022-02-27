#include <iostream>

using namespace std;

void swap(char &, char &);
void reverse(char[]);
void display(char[]);

int main()
{
    char str[50] = "Hello World Programing Rocks!";
    cout << str << endl;
    reverse(str);
    display(str);
    system("pause");
    return 0;
}

void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}
void reverse(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = i; a[j] != '\0'; j++)
        {
            swap(a[i], a[j]);
        }
    }
}
void display(char a[])
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        cout << a[i];
    }
    cout << endl;
}