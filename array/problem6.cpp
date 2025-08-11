// Write a Program in C++ to take input for two square matrix, after that do summation and store the result into a separate Ans matrix
#include <iostream>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int res[3][3];
    cout << "Enter First Array:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr1[i][j];
        }
    }
    cout << "Enter Second Array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
