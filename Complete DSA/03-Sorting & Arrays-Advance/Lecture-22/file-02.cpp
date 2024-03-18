#include <iostream>
using namespace std;
int getCharLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[])
{
    int start = 0;
    int end = getCharLength(name) - 1;

    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}

bool isPalindrome(char name[])
{
    int start = 0;
    int end = getCharLength(name) - 1;
    while (start <= end)
    {
        if (name[start++] != name[end--])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    // Length of String
    // char name[20];
    // cout << "Enter your name: ";
    // cin >> name;
    // int lengthOfName = getCharLength(name);
    // cout << "Length: " << lengthOfName << endl;

    // Reverse a String
    // char name[20];
    // cout << "Enter your name: ";
    // cin >> name;
    // reverse(name);
    // cout << "Your name is: " << name << endl;

    // Check if String is Pallindrome
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    bool ans = isPalindrome(name);
    cout << "Is Pallindrome: " << ans << endl;

    //
}
