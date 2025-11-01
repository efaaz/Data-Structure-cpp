#include <iostream>
using namespace std;

int parttion(int arr[], int str, int end)
{
    int idx = str - 1;
    int pivot = arr[end];

    for (int j = str; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }

    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quickSort(int arr[], int str, int end)
{
    if (str < end)
    {
        int pivotIdx = parttion(arr, str, end);
        quickSort(arr, str, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, end);
    }
}

int main()
{

    int arr[5] = {4, 43, 32, 10, 5};
    quickSort(arr, 0, 4);
    for (int e : arr)
    {
        cout << e << " ";
    }
}