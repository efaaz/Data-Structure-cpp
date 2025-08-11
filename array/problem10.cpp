// Write a Program in C++ to take two 3X3 Square matrix input from user and find the matrix multiplication.
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
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << res[i][j]<< " ";
        }
        cout << endl;
    }
}