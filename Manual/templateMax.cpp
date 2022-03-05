#include <iostream>

using namespace std;

template <typename t>
t max(t a, t b, t c)
{

    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    int a = 32, b = 45, c = 43;
    float x = 45.7, y = 32.1, z = 47.4;
    cout << max(a, b, c) << endl;
    cout << max(x, y, z) << endl;

    system("pause");
    return 0;
}
