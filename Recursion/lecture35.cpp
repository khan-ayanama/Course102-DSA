#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy Values
    int mainArrayIndex = start;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge 2 Sorted Arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    // Sort Left Part
    mergeSort(arr, start, mid);

    // Sort Right Part
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main()
{
    // Merge Sort
    int arr[5] = {2, 5, 1, 7, 3};
    int lastIndex = 5;
    int start = 0;

    cout << "HELLO" << endl;

    mergeSort(arr, start, lastIndex - 1);

    for (int i = 0; i < lastIndex; i++)
    {
        cout << arr[i] << " ";
    }
}