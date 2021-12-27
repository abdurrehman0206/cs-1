#include <iostream>
using namespace std;

int main()
{   
   int nt , ft , sum = 0;
   int tft; //temp ft;

   cout << "Enter First Term :: ";
   cin >> ft;
   tft = ft;
   cout << "Enter Number of Term :: ";
   cin >> nt;

   for(int i = 1 ; i <= nt ; i++){
       cout << ft;
       if(i < nt){
           cout << " + ";
       }
       ft = ft*10 + tft;
       sum = sum+ft;
   }
    cout << "  =" << sum << endl;

    system("pause");
    return 0;
}