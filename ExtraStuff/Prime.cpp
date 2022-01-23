#include <iostream>
using namespace std;

int main()
{
    int num;
    bool chk = true;

    cout << "Enter any number :: ";
    cin >> num;

    for (int i = 2; i < num; i++)   //2- --num
    {

        if (num % i == 0)
        {
            chk = false;
            break;
        }
    }
    if(chk == true){
        cout << "Its a prime number!"<< endl;
    }else{
        cout << "Its not a prime number!"<< endl;
    }
    system("pause");
    return 0;
}
