#include <iostream>

using namespace std;

int sum(int num[], int cn, int sm)
{
    if (cn == 7)
    {
        return sm;
    }
    else
    {
        sm += num[cn];
        return sum(num, ++cn, sm);
    }
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Sum of array :: " << sum(num, 0, 0) << endl;
    system("pause");
    return 0;
}
