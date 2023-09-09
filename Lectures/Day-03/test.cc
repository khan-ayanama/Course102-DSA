#include <iostream>
using namespace std;

int maxArr(int *arr, int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void reverseArray(int arr[], int size)
{
    for (int i = 0; i <= size / 2; i++)
    {
        int last = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = last;
    }
    // return arr;
}

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void swapAlternative(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int first = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = first;
        cout << "vlaue of i " << i << endl;
        i++;
    }
}

int main()
{
    // Maximium value of an array
    // int arr[6] = {5, 14, 98, 34, 222, 1};
    // cout << maxArr(arr, 6);

    // Reverse an Array
    // int arr[5] = {1, 2, 3, 4, 5};
    // reverseArray(arr, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // Linear Search
    // int arr[5] = {1, 34, 23, 66, 3};
    // cout << linearSearch(arr, 5, 606);

    // swapAlternatives
    int arr[6] = {1, 2, 3, 4, 5, 6};
    swapAlternative(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
}