#include <iostream>
using namespace std;
int main()
{
    // Character Arrays
    // Strings are 1-D character Array

    // Initializing Character Array
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    name[2] = '\0';

    cout << "Your name is " << name << endl;

    return 0;
}