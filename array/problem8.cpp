// Write a Program in C++ to take a NXN Square matrix input from user. Now find the sum of all the diagonal elements. Make sure to consider all values only once.
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the size of matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        sum += arr[i][i];
    }
    for (int i = 0; i < n; i++){
        if (i != n - 1 - i){
            sum += arr[i][n - 1 - i];
        }
    }
    cout << "Sum of diagonal elements: " << sum << endl;
    return 0;
}
