#include <iostream>
using namespace std;

int main()
{
    int num, counter = 0;
    cout << "Enter any Number :: ";
    cin >> num;

    while (num)
    {
        num = num / 10;
        counter++;
    }
    cout << "Number of digits :: " << counter << endl;
    system("pause");
    return 0;
}