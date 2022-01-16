#include <iostream>
using namespace std;

int main()
{

    char c;
    cout << "Input any alphabet :: ";
    cin >> c;

    cout << (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? "Vowel" : "Consonant") : "Error!") << endl;

    system("pause");
    return 0;
}