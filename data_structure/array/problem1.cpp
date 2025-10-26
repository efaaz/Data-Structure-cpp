//  Initialize TWO integer arrays of different sizes. Merge the input arrays and create a new array. Then print the new array in reverse order.
#include <iostream>
using namespace std;
int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {6, 7, 8};
    int mergeArr[100];
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < m; i++){
        mergeArr[i] = arr1[i];
    }
    for (int i = 0; i < n; i++){
        mergeArr[m + i] = arr2[i];
    }
    cout << "Merged array: ";
    for (int i = m + n - 1; i >= 0; i--){
        cout << mergeArr[i] << " ";
    }
    cout << endl;
    return 0;
}