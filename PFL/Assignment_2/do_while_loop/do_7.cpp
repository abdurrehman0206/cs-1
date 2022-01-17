#include <iostream>
using namespace std;

int main()
{
    int nth, i = 1;
    cout << "Enter a Number :: ";
    cin >> nth;
    int cnt = 0, nth_even = 0;
    do
    {
        if (i % 2 == 0)
        {
            cnt++;
            nth_even = i;
        }
        i++;
    } while (cnt != nth);
    cout << nth << "th even number is :: " << nth_even << endl;
    system("pause");
    return 0;
}