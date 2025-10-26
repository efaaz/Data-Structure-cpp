#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(){
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    int target = 3;
    int res = linearSearch(arr, n, target);
    if (res != -1) {
        cout << "Element found at index: " << res << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
