#include <iostream>
using namespace std;
#include <math.h>

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getMax(int arr[], int size)
{
    int maxi = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "Maximium value is " << maxi << endl;
}

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int searchKey(int arr[], int size, int key)
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
    // getMax(num, 10);

    // 4.Reverse an array
    // int arr[8] = {13, 2, 34, 634, 43, 3, 3, 4};
    // printArray(arr, 8);
    // cout << endl;
    // reverse(arr, 8);
    // cout << endl;
    // printArray(arr, 8);
    // cout << endl;

    // Linear Search
    // int arr[10] = {1, 2, 3, 14, 3, 44, 55, 21, 455, 61};
    // int size = 5;
    // int key = 55;
    // int ans = searchKey(arr, 55, key);
    // cout << "index is " << ans << endl;
}