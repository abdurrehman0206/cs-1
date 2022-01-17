#include <iostream>
using namespace std;

int main()
{
    int num, counter = 0;
    cout << "Enter any Number :: ";
    cin >> num;

    do
    {
        num = num / 10;
        counter++;
    } while (num);
    cout << "Number of digits :: " << counter << endl;
    system("pause");
    return 0;
}