
#include <iostream>

using namespace std;

void rf(int n)
{

    if (n > 10)
        return;
    else
    {
        cout << "Call Number " << n << endl;
        rf(n = n + 1);
    }
}
int main()
{
    int num = 0;
    rf(num); 
    system("pause");
    return 0;
}