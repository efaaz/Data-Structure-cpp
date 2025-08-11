#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;        
    int value = 10;  
    int position = 4; 

    for (int i = n; i >= position; i--){
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}