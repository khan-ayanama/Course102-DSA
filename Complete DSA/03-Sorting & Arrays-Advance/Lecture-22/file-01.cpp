#include <iostream>
using namespace std;
int main()
{
    // Character Arrays
    // Strings are 1-D character Array
    // cin stops the execution when there is space, tab or enter.

    // Initializing Character Array
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    // name[2] = '\0';     // '\0' null character to terminate the string.

    cout << "Your name is " << name << endl;

    return 0;
}