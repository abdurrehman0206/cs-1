#include <iostream>

using namespace std;

template <typename t>
t sum(t a, t b)
{
    return a + b;
}

int main()
{
    int a = 4, b = 5;
    float x = 4.5, y = 5.5;
    cout << sum(a, b) << endl;
    cout << sum(x, y) << endl;

    system("pause");
    return 0;
}
