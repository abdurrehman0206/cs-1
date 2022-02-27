#include <iostream>

using namespace std;

int main()
{

    int space = 0, word = 0;
    char str[50] = "Hello World Programming Rocks !";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            word++;
        }
    }
    cout << "Spaces :: " << space << endl;
    cout << "Words :: " << word << endl;
    cout << "Total Size :: " << space + word << endl;
    system("pause");
    return 0;
}