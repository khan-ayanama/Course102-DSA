#include <iostream>
using namespace std;
int binarySearch(int arr[], int lastIndex, int start, int key)
{
    int end = lastIndex;
    int mid = start + (end - start) / 2;

    for (int i = 0; i < lastIndex; i++)
    {
        if (arr[mid] > key)
        {
            cout << "ONE: " << arr[mid] << "TWO: " << key << endl;
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] == key)
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
}
int pivotArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    for (int i = 0; i < end; i++)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int searchSortedRotated(int arr[], int size, int key)
{
    int pivotIndex = pivotArray(arr, size);
    int start = 0;
    int lastIndex = size - 1;

    if (arr[pivotIndex] > key)
    {
        start = pivotIndex + 1;
        return binarySearch(arr, lastIndex, start, key);
    }
    if (arr[pivotIndex] < key)
    {
        lastIndex = pivotIndex - 1;
        return binarySearch(arr, lastIndex, start, key);
    }
}
int main()
{
    // pivot of an Array
    // int arr[7] = {5, 6, 7, 1, 2, 3, 4};
    // int pivotIndex = pivotArray(arr, 7);
    // cout << "PivotIndex: " << pivotIndex << endl;

    // // Search in sorted Rotated Array
    // int ans = searchSortedRotated(arr, 7, 7);
    // cout << "Search Index: " << ans << endl;
}