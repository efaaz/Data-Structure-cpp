//  Initialize an integer array A of size 10. Take an integer as input and print how many times that integer occurs in A.
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 1, 2, 1, 3, 4};
    int num;
    cout << "Enter an integer to search in the array: ";
    cin >> num;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    cout << "The number " << num << " occurs " << count << " times in the array" << endl;

    return 0;
}