#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}
int main()
{
    // Rotate Array
    // vector<int> nums{11, 12, 13, 14, 15};

    // int size = nums.size();

    // vector<int> temp(size);

    // for (int i = 0; i < size; i++)
    // {
    //     temp[(i + 3) % size] = nums[i];
    // }

    // nums = temp;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << nums[i] << " ";
    // }

    // Check if Array is Sorted and Rotated
    // vector<int> nums{3, 5, 5, 1, 2};
    // int count = 0;

    // for (int i = 1; i < nums.size(); i++)
    // {
    //     if (nums[i - 1] > nums[i])
    //     {
    //         count++;
    //     }
    // }
    // if (nums[nums.size() - 1] > nums[0])
    // {
    //     count++;
    // }
    // if (count <= 1)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    // Sum of Two Arrays
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {5, 6, 7, 8};

    vector<int> ans;

    int array1Size = 3;
    int array2Size = 3;

    int carry = 0;

    // Case 1 --> When both array has values
    while (array1Size >= 0 && array2Size >= 0)
    {
        int val1 = arr1[array1Size];
        int val2 = arr2[array2Size];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        array1Size--;
        array2Size--;
    }

    while (array1Size >= 0)
    {
        int sum = arr1[array1Size];
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        array1Size--;
    }

    while (array2Size >= 0)
    {
        int sum = arr2[array2Size];
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        array2Size--;
    }
    ans = reverse(ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}