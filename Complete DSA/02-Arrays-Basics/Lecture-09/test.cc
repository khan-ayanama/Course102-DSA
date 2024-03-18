#include <iostream>
using namespace std;

int maxOfArray(int arr[], int size)
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
    for (int i = 0; i < size; i++)
    {
        if (i < size - i + 1)
        {
            int last = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = last;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {44, 35, 204, 333, 0};
    int size = 5;

    int ans = maxOfArray(arr, size);

    cout << "Maximium of an Array: " << ans << endl;

    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}