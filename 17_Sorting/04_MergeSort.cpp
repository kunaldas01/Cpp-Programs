// Merge Sort
#include <iostream>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    int merged[ei - si + 1];
    int idx1 = si;
    int idx2 = mid + 1;
    int x = 0;

    while (idx1 <= mid && idx2 <= ei)
    {
        if (arr[idx1] <= arr[idx2])
        {
            merged[x++] = arr[idx1++];
        }
        else
        {
            merged[x++] = arr[idx2++];
        }
    }

    while (idx1 <= mid)
    {
        merged[x++] = arr[idx1++];
    }

    while (idx2 <= ei)
    {
        merged[x++] = arr[idx2++];
    }

    for (int i = 0, j = si; i < (ei - si + 1); i++, j++)
    {
        arr[j] = merged[i];
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

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}