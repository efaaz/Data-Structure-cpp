// Initialize TWO integer arrays A and B of different sizes. Make a new array with the common elements between A and B. Print the new array elements). If there is no common element, output "No common element!
#include <iostream>
using namespace std;
int main()
{
    int arr1[4] = {6, 4, 8, 9};
    int arr2[6] = {1, 4, 5, 9, 3, 6};
    int cmnArr[25];
    int k = 0;
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    bool found = false;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr1[i] == arr2[j]){
                found = true;
            }
        }
        if (found){
            cmnArr[k++] = arr1[i];
            found = false;
        }
    }
    for (int i = 0; i < k; i++){
       cout << cmnArr[i] << " ";
    }
}