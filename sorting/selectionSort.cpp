#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int sm = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[sm]){
                sm = j;
            }
        }
        swap(arr[i], arr[sm]);
    }
} 
int main(){
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    selectionSort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
