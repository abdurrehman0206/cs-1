#include <iostream>

using namespace std;

int *mul(int *a)
{
    int *temp = a;
    for (int i = 0; i < 7; i++)
    {
        *temp *= 5;
        temp++;
    }
    return a;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *p;

    p = mul(arr);

    for (int i = 0; i < 7; i++)
    {
        cout << *p++ << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
