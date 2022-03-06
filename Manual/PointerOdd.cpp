#include <iostream>

using namespace std;

void isOdd(int *p)
{
    for (int i = 0; i < 21; i++)
    {
        if (*p % 2 != 0)
        {
            cout << *p << " is odd" << endl;
        }
        p++;
    }
}

int main()
{

    int a[] = {24, 3489, 14, 1548, 18, 154, 3465, 164, 1233, 156, 186, 164, 15, 164, 1233, 156, 446, 17, 9, 3, 15};
    int *p;
    p = a;
    isOdd(p);
    system("pause");
    return 0;
}
