#include <iostream>
using namespace std;

int main()
{
    char ch; // datatype name //datatype == int , float , char
    cout << "Enter any char :: ";
    cin >> ch;
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout << "Its a vowel!"<<endl;
        }else{
            cout << "Consonant!"<<endl;
        }
    }
    else
    {
        cout << "Its not an alphabet!" << endl;
    }

    system("pause");
    return 0;
}