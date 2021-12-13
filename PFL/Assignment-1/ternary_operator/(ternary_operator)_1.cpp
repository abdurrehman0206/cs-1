#include <iostream>
using namespace std;

int main()
{

    int hour;
    cout << "Input hour [24h] :: ";
    cin >> hour;

    cout << (hour < 16 ? "Good Day" : "Good Evening") << endl;

    system("pause");
    return 0;
}