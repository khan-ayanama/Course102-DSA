#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    bool isSwapped = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
        {
            break;
        }
    }
}
int main()
{
    // Bubble Sort
    int arr[7] = {1, 2, 3, 4, 4, 5, 6};
    bubbleSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    // Bubble Sort puts largest element in the first round and after that it follows same trend.
    // Space Complexity -> O(1)
    // Time Complexity -> O(n^2)
    // Stable Algorithm
}