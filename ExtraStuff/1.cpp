#include <iostream>

using namespace std;

int main()
{
    int i, j, size, start, end;

    cout << "Input Size";
    cin >> size;

    start = 1;
    end = size * 2;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size * 2; j++){
            if (j <= start || j >= end){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
        start++;
        end--;
    }
    system("pause");
    return 0;
}