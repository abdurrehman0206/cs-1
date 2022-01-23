#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any char :: ";
    cin >> c;

    for(int i=1 ;i < 10;i++){
        for(int j = 1; j <= i;j++){
                cout << c;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}