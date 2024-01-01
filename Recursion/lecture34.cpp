#include <iostream>
using namespace std;

void reverseString(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverseString(str, i, j);
}

bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int checkPower(int base, int power){
    if(power==0) return 1;
    if(power==1) return base;

    int ans = checkPower(base,power/2);

    if(power%2==0) return ans*ans;
    if(power%2!=0) return base*(ans*ans);
}

void bubbleSort(int *arr,int size){
    if(size==0||size==1) return;
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);

        bubbleSort(arr,size-1);
    }
    
}

int main()
{
    // Reverse the String using recursion
    // string name = "Ayan";
    // reverseString(name, 0, name.length() - 1);
    // cout << name << endl;

    // Check Panlindrome
    // string name = "abba";
    // bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);
    // if (isPalindrome)
    //     cout << "Palindrome" << endl;
    // else
    // {
    //     cout << "Not Palindrome" << endl;
    // }

    // checkPower
    // int base = 2;
    // int power = 10;
    // int ans = checkPower(base,power);
    // cout<<ans;

    // bubbleSort
    int numbers[6] = {1,9,3,6,2,5};
    bubbleSort(numbers,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<numbers[i]<<" ";
    }
    
}