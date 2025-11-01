#include <iostream>
using namespace std;
void merge(int arr[], int str, int mid, int end, int temp[])
{
    int i = str;
    int j = mid + 1;
    int k = str;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int idx = str; idx <= end; idx++)
    {
        arr[idx] = temp[idx];
    }
}

void mergeSort(int arr[], int str, int end, int temp[])
{
    if (str < end)
    {
        int mid = str + (end - str) / 2;
        mergeSort(arr, str, mid, temp);
        mergeSort(arr, mid + 1, end, temp);

        merge(arr, str, mid, end, temp);
    }
}

int main()
{
    int arr[5] = {38, 27, 43, 3, 9};
    int temp[5];
    mergeSort(arr, 0, 4, temp);

    for (int e : arr)
    {
        cout << e << " ";
    }

    return 0;
}