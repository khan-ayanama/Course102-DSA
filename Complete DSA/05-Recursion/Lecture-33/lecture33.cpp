#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int printSum(int arr[], int size)
{
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];

    // int remainingPart = printSum(arr + 1, size - 1);
    // int sum = arr[0] + remainingPart;
    return arr[0] + printSum(arr + 1, size - 1);
}

bool LinearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    return LinearSearch(arr + 1, size - 1, key);
}

bool binarySearch(int *arr, int start, int end, int key)
{
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, end, key);
    else
        return binarySearch(arr, start, mid - 1, key);
}
int main()
{
    // Recursion and Binary Search
    /*int arr[5] = {1, 2, 6, 4, 5};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;
    */

    // Sum of the element of an array
    /*int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int ans = printSum(arr, size);
    cout << "Answer is " << ans << endl;*/

    // Linear Search by Recurstion
    /*int arr[5] = {2, 53, 23, 5, 3};
    int size = 5;
    int key = 203;

    int ans = LinearSearch(arr, size, key);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }*/

    // Binary Search with Recursion
    /*int arr[6] = {1, 2, 24, 40, 55, 99};
    int size = 6;
    int key = 505;
    int start = 0;
    int end = 5;
    int ans = binarySearch(arr, start, end, key);

    if (ans)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;*/

    //
}