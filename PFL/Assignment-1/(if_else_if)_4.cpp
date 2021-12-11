#include <iostream>
using namespace std;
// Everything is hardcoded for the purpose of example

int main()
{
    int batch;
    char ses;
    cout << "Current Year :: 2021 "<< endl; 
    cout << "Enter your Batch (e.g 18) :: ";
    cin >> batch;
    cout << "Enter Session (i.e F , S) :: ";    // Spring Fall
    cin >> ses;

        if (batch < 18)
        {
            cout << "Please refer to Administration.....!"<< endl;
        }
        else if (batch == 18)
        {
            if(ses == 'F' || ses == 'f'){
            cout << "Passing Year :: 2022 "<< endl;
            cout << "Semester :: 7 "<<endl;
            }else if(ses == 'S'||ses == 's'){
                cout << "Passing Year :: 2022 "<< endl;
            cout << "Semester :: 8 "<<endl;
            }else{
                cout << "Invalid Session Entry!"<<endl;
            }
          
        }
        else if (batch == 19)
        {
            if(ses == 'F'||ses == 'f'){
            cout << "Passing Year :: 2023 "<< endl;
            cout << "Semester :: 5 "<<endl;
            }else if(ses == 'S'||ses == 's'){
                cout << "Passing Year :: 2023 "<< endl;
            cout << "Semester :: 6 "<<endl;
            }else{
                cout << "Invalid Session Entry!"<<endl;
            }
            
        }
        else if (batch == 20)
        {
            if(ses == 'F'||ses == 'f'){
            cout << "Passing Year :: 2024 "<< endl;
            cout << "Semester :: 3 "<<endl;
            }else if(ses == 'S'||ses == 's'){
                cout << "Passing Year :: 2024 "<< endl;
            cout << "Semester :: 4 "<<endl;
            }else{
                cout << "Invalid Session Entry!"<<endl;
            }
       
        }
        else if (batch == 21)
        {
            if(ses == 'F'||ses == 'f'){
            cout << "Passing Year :: 2025 "<< endl;
            cout << "Semester :: 1 "<<endl;
            }else if(ses == 'S'||ses == 's'){
                cout << "Passing Year :: 2025 "<< endl;
            cout << "Semester :: 2 "<<endl;
            }else{
                cout << "Invalid Session Entry!"<<endl;
            }
        }else{
            cout << "Invalid Batch Entry!"<<endl;
        }
    

    system("pause");
    return 0;
}