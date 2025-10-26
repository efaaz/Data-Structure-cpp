// Write a Program in C++ to take a NXN Square matrix input from user and Perform Transpose. such that original matrix values are change with transposed values.
#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int arr[n][n];
    int trans[n][n];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            trans[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}