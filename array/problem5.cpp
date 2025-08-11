//  Initialize an integer array A of size 10. Print the number of time each element occurs in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 1, 2, 1, 3, 4};
    int count = 0;
    for (int i = 0; i < 10; i++){
        bool alreadyProcessed = false;
        for (int k = 0; k < i; k++){
            if (arr[k] == arr[i]){
                alreadyProcessed = true;
                break;
            }
        }
        if (!alreadyProcessed){
            for (int j = 0; j < 10; j++){
                if (arr[i] == arr[j]){
                    count++;
                }
            }
            cout << "The number " << arr[i] << " occurs " << count << " times in the array" << endl;
            count = 0; // Reset count for the next element
        }
    }
    return 0;
}