#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    for (int i = 0; i <= end; i++)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    for (int i = 0; i <= end; i++)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int peakIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    for (int i = 0; i < end; i++)
    {
        if (arr[mid] < arr[mid + 1])
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

int main()
{
    // First and Last Occurence
    int arr[7] = {0, 1, 2, 4, 4, 4, 7};

    int first = firstOccurence(arr, 7, 2);
    cout << "First: " << first << endl;
    // int last = lastOccurence(arr, 7, 2);
    // cout << "Last: " << last << endl;

    // Peak Index of Mountain Array
    // int arr[7] = {1, 3, 5, 7, 9, 1, 0};

    // int ans = peakIndex(arr, 7);
    // cout << "Peak: " << ans << endl;
}