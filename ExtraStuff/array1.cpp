#include <iostream>
using namespace std;

int main(){

    char chl[26];
    char chu[26];

   char temp = 'a';
   char temp1 = 'A';

   for(int i = 0 ; i < 26 ; i++){
      chl[i] = temp;
      chu[i] = temp1;
      temp++;
      temp1++;
   }

   for(int i = 0 ; i < 26 ; i++){
      if(chl[i]=='a'||chl[i]=='e'||chl[i]=='i'||chl[i]=='o'||chl[i]=='u'){
         cout << "There is a vowel at " << i << " :: " << chl[i] << endl;
         break;
      }else{
         cout << "There is a consonant at " << i << " :: " << chl[i] << endl;
      }
      if(chu[i]=='A'||chu[i]=='E'||chu[i]=='I'||chu[i]=='O'||chu[i]=='U'){
         cout << "There is a vowel at " << i << " :: " << chu[i] << endl;
         break;
      }else{
         cout << "There is a consonant at " << i << " :: " << chu[i] << endl;
      }
   }



    system("pause");
    return 0;
}