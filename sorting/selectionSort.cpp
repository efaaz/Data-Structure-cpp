#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < n - 1; i++){
        int sm = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[sm]){
                sm = j;
            }
        }
        swap(arr[i], arr[sm]);
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}