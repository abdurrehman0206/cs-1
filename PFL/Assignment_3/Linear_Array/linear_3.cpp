#include <iostream>

using namespace std;

void input(int[]);
void output(int[]);

int main()
{

    int arr[10];
    input(arr);
    cout << "Output: " << endl;
    output(arr);
    system("pause");
    return 0;
}


void input(int arr[]){
    for(int i = 0; i < 10; i++){
        cout << "Enter index: " << i << " :: ";
        cin >> arr[i];
    }
}


void output(int arr[]){
    for(int i = 0; i < 10; i++){
        cout << "Value of index: " << i << " :: " << arr[i] << endl;
    }
}
