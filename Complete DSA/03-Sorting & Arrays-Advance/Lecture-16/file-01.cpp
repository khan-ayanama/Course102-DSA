#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    // selectionSort
    int arr[7] = {2, 5, 0, 25, 7, 8, 11};

    selectionSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    // Selection sort puts smallest element first  
    // Use it when size of an array is small
    // It is unstable it means it doesn't maintain it's orignal order
    // Space Complexity -> O(1)
    // Time Complexity -> O(n^2)
}