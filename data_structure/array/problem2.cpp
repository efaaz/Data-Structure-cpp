// Initialize an array. Size should be more than FIVE. Write you program to change the array in such a way so that there cannot be any duplicate element in the array anymore. Print the changed array. If the initialized array already had no duplicate elements from the beginning, output a message saying "Array already unique!
#include <iostream>
using namespace std;
int main(){
    int arr[] = {4, 7, 2, 4, 9, 2, 7};
    int m = sizeof(arr) / sizeof(arr[0]);
    int unique[100];
    int k = 0;
    bool dup = false;
    for (int i = 0; i < m; i++){
        bool found = false;
        for (int j = 0; j < k; j++){
            if (arr[i] == unique[j]){
                dup = true;
                found = true;
                break;
            }
        }
        if (!found){
            unique[k++] = arr[i];
        }
    }
    if (!dup){
        cout << "Array already unique!" << endl;
    }
    else{
        cout << "unique array elements are: ";
        for (int i = 0; i < k; i++){
            cout << unique[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
