#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int swapAlternative(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
        i += 2;
    }
}

bool checkUniqueFrequency(int arr[], int n)
{
    int ans[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                ans[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || ans[i] == 0)
            {
                continue;
            }
            if (ans[i] == ans[j])
            {
                return false;
            }
        }
    }
    return true;
}

// Finding Unique Element in an Array
// Method-1
int uniqueElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << isUnique << endl;
            return arr[i];
        }
    }
}

// Method - 2 of finding an unique element of an array
int uniqueElement2(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int duplicateElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
                return arr[i];
        }
    }
}

int main()
{
    // 1.Swap Alternatives
    // int arr[6] = {1, 2, 3, 4, 5, 6};
    // swapAlternative(arr, 6);
    // printArray(arr, 6);

    // 2. Finding an unique element in an array
    // int arr[] = {2, 2, 5, 10, 121, 1, 12, 10, 5, 1, 12};
    // int ans = uniqueElement2(arr, 11);
    // cout << "ANswre is " << ans << endl;

    // bool ans = checkUniqueFrequency(arr, n);
    // cout << "Value of answer is " << ans << endl;

    // 4.Duplicate in an Array
    // int arr[] = {1, 2, 3, 4, 2, 5};
    // int ans = duplicateElement(arr, 6);
    // cout << "Duplicate element is " << ans << endl;
    // For method 2 visit coding ninja website

    //
}