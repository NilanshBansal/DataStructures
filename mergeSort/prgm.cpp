#include <iostream>
using namespace std;
void merge(int arr[], int si, int mid, int ei)
{
    int *output = new int[ei - si + 1];
    int i = si, j = mid + 1, k = 0;
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            output[k++] = arr[i];
            i++;
        }
        else
        {
            output[k++] = arr[j];
            j++;
        }
    }
    while (i <= mid)
    {
        output[k++] = arr[i++];
    }
    while (j <= ei)
    {
        output[k++] = arr[j++];
    }
    //copy output to arr
    k = 0;
    for (int i = si; i <= ei; i++)
    {
        arr[i] = output[k++];
    }
}
void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}