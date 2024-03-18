#include <iostream>
using namespace std;

int getMaxOfArray(int arr[], int size)
{
    int maximium = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximium)
        {
            maximium = arr[i];
        }
    }
    return maximium;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int linearKeySearch(int arr[], int size, int key)
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

int main()
{
    // 1.Initialising the array with all of the value 0
    // int array[1000] = {0};

    // 2.Initialising the array with all of the value 1
    // int number[100];
    // fill_n(number, 100, 1);
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << number[i] << " ";
    // }

    // 3.Maximium value of an array
    // int num[10] = {2, -5, 76, 34, 3, 4, 6};
    // int ans = getMaxOfArray(num, 10);
    // cout << "Maximium of an array is " << ans << endl;

    // 4.Reverse an array
    // int arr[8] = {13, 2, 34, 634, 43, 3, 3, 4};
    // printArray(arr, 8);
    // reverseArray(arr, 8);
    // cout<<endl;
    // printArray(arr, 8);

    // Linear Search
    // int arr[10] = {1, 2, 3, 14, 3, 44, 55, 21, 455, 61};
    // int size = 5;
    // int key = 55;
    // int ans = linearKeySearch(arr, 55, key);
    // cout << "index is " << ans << endl;
}