#include <iostream>
using namespace std;

int main()
{
    //for(ini , cond , inc){}
    // ini 
    //while (cond){ update }
    
    int a;
    cout <<"Input Number :: ";
    cin >> a;

    int i =1;
    while(i<=10){
        cout << a << " x " << i << " = " << a*i <<endl;
        i++;
    }

    system("pause");
    return 0;
}