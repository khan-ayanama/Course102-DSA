#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;

    return isSorted(arr + 1, size - 1);
}

int sumOfArray(int arr[], int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    return arr[0] + sumOfArray(arr + 1, size - 1);
}

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;

    return linearSearch(arr + 1, size - 1, key);
}

int binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}
int main()
{
    // is Array sorted?
    int arr[5] = {1, 15, 3, 4, 5};

    bool ans = isSorted(arr, 5);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    int sum = sumOfArray(arr, 5);
    cout << "Sum: " << sum << endl;

    bool isPresent = linearSearch(arr, 5, 13);

    if (isPresent)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    int binaryElement = binarySearch(arr, 0, 5, 51);
    cout << "BIN: " << binaryElement << endl;
}