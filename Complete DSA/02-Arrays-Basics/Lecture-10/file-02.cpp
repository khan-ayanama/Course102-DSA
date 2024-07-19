#include <iostream>
#include <vector>
using namespace std;
int uniqueElement(int arr[], int size)
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
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

vector<int> intersectionArray(int arr1[], int size1, int arr2[], int size2)
{
    vector<int> ans;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr2[j]);
            }
        }
    }
    return ans;
}

vector<int> pairSum(int arr[], int size, int sum)
{
    vector<vector<int>> ans;

    for (int i = 0; i < size; i++)
    {
        vector<int> subAns;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                subAns.push_back(arr[i]);
                subAns.push_back(arr[j]);
                ans.push_back(subAns);
                subAns.clear();
            }
        }
    }
}

void sortSpecificValues(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        // Swap element with 0 if not already 0
        if (arr[i] != 0)
        {
            int j = i;
            while (j > 0 && arr[j - 1] == 0)
            {
                std::swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }

    // Move all remaining 1s after 0s
    int j = n - 1;
    for (int i = n - 1; i >= 0; --i)
    {
        if (arr[i] == 0)
        {
            break;
        }
        if (arr[i] == 1)
        {
            std::swap(arr[i], arr[j]);
            j--;
        }
    }
}
int main()
{
    // 1. Unique Element in an Array
    // int arr[7] = {5, 3, 2, 5, 6, 3, 6};

    // int ans = uniqueElement(arr, 7);
    // cout << "Unique Element: " << ans << endl;

    // 2. Duplicate in an Array
    // int arr[7] = {2, 1, 3, 5, 1, 6, 4};

    // int ans = duplicateElement(arr, 7);
    // cout << "Duplicate: " << ans << endl;

    // 3. Intersection of Two Sorted Arrays
    // int arr1[5] = {2, 4, 6, 8, 10};
    // int arr2[3] = {2, 10, 8};

    // vector<int> ans = intersectionArray(arr1, 5, arr2, 3);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // 4. Pair Sum --> Pending
    // int arr[7] = {1, 3, 4, 5, 2, 0, 6};

    // vector<int> ans = pairSum(arr, 7, 5);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " : ";
    // }

    // Sort 0, 1 & 2
    // int number[7] = {2, 1, 0, 2, 0, 1, 1};
    // sortSpecificValues(number, 7);
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << number[i] << ", ";
    // }
}