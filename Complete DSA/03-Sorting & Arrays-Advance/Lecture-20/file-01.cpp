#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    // Reverse an Array
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}