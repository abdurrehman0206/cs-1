#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any Alphabet :: ";
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "The character you entered is a vowel." << endl;
            break;
        default:
            cout << "The character you entered is a consonant." << endl;
        }
    }
    else
    {
        cout << "You did not enter an alphabet." << endl;
    }
    system("pause");
    return 0;
}