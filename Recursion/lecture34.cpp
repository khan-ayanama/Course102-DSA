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
int main()
{
    // Reverse the String using recursion

    // string name = "Ayan";
    // reverseString(name, 0, name.length() - 1);
    // cout << name << endl;

    // Check Panlindrome

    string name = "abba";
    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
        cout << "Palindrome" << endl;
    else
    {
        cout << "Not Palindrome" << endl;
    }
}