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

        cout << "value: " << j << " ";

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

    /*
     * Complexity:
     *  - Time Complexity:
     *    - Best Case: O(n)
     *      When the array is already sorted, insertion sort only needs to pass through the array once.
     *    - Average Case: O(n^2)
     *      On average, insertion sort requires n(n-1)/4 comparisons and shifts, resulting in quadratic time complexity.
     *    - Worst Case: O(n^2)
     *      When the array is sorted in reverse order, insertion sort performs the maximum number of comparisons and shifts.
     *
     *  - Space Complexity:
     *    - Auxiliary Space: O(1)
     *      Insertion sort is an in-place sorting algorithm, requiring a constant amount of additional space.
     *
     * Stability:
     *  - Yes, insertion sort is stable.
     *    It preserves the relative order of records with equal keys (i.e., values).
     */
}