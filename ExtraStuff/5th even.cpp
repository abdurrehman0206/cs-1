#include <iostream>
using namespace std;

int main()
{

       int cnt = 0, even5 = 0;
       for (int i = 1; cnt != 5; i++)
       {
              if (i % 2 == 0)
              {
                     cnt++;
                     even5 = i;
              }
       }
       cout << "5th even number is " << even5 << endl;
       system("pause");
       return 0;
}