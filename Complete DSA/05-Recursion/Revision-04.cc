#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || 1)
        return true;
    if (arr[0] > arr[1])
        return false;

    return isSorted(arr + 1, size - 1);
}

bool LinearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;
    return LinearSearch(arr + 1, size - 1, key);
}

bool binarySearch(int arr[], int start, int end, int key)
{

    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return true;

    if (arr[mid] > key)
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}

void reverseString(string &name, int start, int end)
{
    if (start > end)
        return;

    swap(name[start], name[end]);
    start++;
    end--;
    reverseString(name, start, end);
}

bool checkPalindrome(string &name, int start, int end)
{
    if (start > end)
        return true;
    if (name[start] != name[end])
        return false;

    start++;
    end--;
    return checkPalindrome(name, start, end);
}

int powerOfNumber(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base;

    int result = powerOfNumber(base, exponent / 2);

    if (exponent % 2 == 0)
        return result * result;
    if (exponent % 2 != 0)
        return base * (result * result);
}

void bubbleSort(int *arr, int end)
{
    if (end == 0 || end == 1)
        return;

    for (int i = 0; i < end - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        bubbleSort(arr, end - 1);
    }
}

int main()
{
    // Array is Sorted
    // int arr[5] = {1,2,3,4,5};
    // bool ans =  isSorted(arr,5);
    // cout<<"ans: "<<ans<<endl;

    // Linear Search
    // int arr[10] = {1,3,5,6,44,23,13,334,34,123};
    // bool ans = LinearSearch(arr,10,139);
    // cout<<"Ans: "<<ans<<endl;

    // Binary Search
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // bool ans = binarySearch(arr, 0, 10, 41);
    // cout << "Ans: " << ans << endl;

    // Reverse String
    // string name = "Ayan";
    // reverseString(name, 0, name.length() - 1);
    // cout << "Name: " << name << endl;

    // Check Palindrome
    // string name = "abca";
    // bool ans = checkPalindrome(name, 0, name.length() - 1);
    // cout << "Ans: " << ans << endl;

    // Calculating Power
    // int ans = powerOfNumber(2, 6);
    // cout << "Ans: " << ans << endl;

    // Bubble Sort
    int arr[5] = {1, 55, 2, 34, 7};

    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}