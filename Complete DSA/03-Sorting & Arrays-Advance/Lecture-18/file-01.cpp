#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        for (int k = 0; k < 7; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;

        arr[j + 1] = temp;
    }
}
int main()
{
    // Insertion Sort
    int arr[7] = {2, 5, 3, 22, 6, 9, 13};

    insertionSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}