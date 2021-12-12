#include <iostream>
using namespace std;

int main (){
    
    float num;
    cout << "Enter a number :: ";
    cin >> num;

    if (num > 0){
        cout << "Postive number !"<<endl;
    }else if(num < 0){
        cout << "Negative number !"<<endl;
    }else{
        cout << "Zero !"<<endl;
    }

    system("pause");
    return 0;
}