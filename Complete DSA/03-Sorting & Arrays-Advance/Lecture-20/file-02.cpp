#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr1[j++];
    }
}

void moveZeroes(int arr[], int size)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main()
{
    // Merge 2 Sorted Arrays
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8];

    mergeSortedArray(arr1, 5, arr2, 3, arr3);

    for (int i = 0; i < 8; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    // Move Zeroes to Right
    int nums[6] = {0, 2, 0, 3, 0, 1};
    moveZeroes(nums, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }
}