//Program based on logic of app redirection based on age
//Assuming customer base is under age of 61
#include <iostream>
using namespace std;

int main()
{
    float age;
    cout << "If you are 60+ please contact customer support rep!" << endl;
    cout << "Enter Age :: ";
    cin >> age;


    if (age <= 12)
    {
        cout << "Redirecting to Childrens Section.... " << endl;
        //code for redirection
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "Redirecting to Teen Section.... " << endl;
    }
    else if (age >= 20 && age <= 40)
    {
        cout << "Redirecting to Adult Section... " << endl;
    }
    else if (age >= 40 && age <= 60)
    {
        cout << "Redirecting to Elder Section.... " << endl;
    }
    else
    {
        cout << "Technical Issues! Redirecting to home .... " << endl;
    }

    system("pause");
    return 0;
}