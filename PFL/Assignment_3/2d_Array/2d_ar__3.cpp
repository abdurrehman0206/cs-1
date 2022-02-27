#include <iostream>
#include<conio.h>

using namespace std;

int main(){
    int row, col;
    cout << "Input Row :: ";
    cin >> row;
    cout << "Input Col :: ";
    cin >> col;

    int arr[row][col];
    cout << row << "x" << col << " Matrix Created!" << endl;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << i << "x" << j << " :: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}