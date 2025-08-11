// Write a Program in C++ to take a NXN Square matrix input from user. Now find the sum of all the diagonal elements. Make sure to consider all values only once
#include <iostream>
using namespace std;
int main(){
    int N = 5;
    int sum = 0;
    int arr[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    for (int i = 0; i < N; i++){
        sum += arr[0][i];
    }
    for (int i = 0; i < N; i++){
        sum += arr[N - 1][i];
    }
    for (int i = 1; i < N - 1; i++){
        sum += arr[i][0];
    }
    for (int i = 1; i < N - 1; i++){
        sum += arr[i][N - 1];
    }
    cout << "Sum of one side and diagonals: " << sum << endl;
    return 0;
}