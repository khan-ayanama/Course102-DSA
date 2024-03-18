#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greeting = "Hello, world!";

    // Accessing the first and last characters
    char first_char = greeting.front();
    char last_char = greeting.back();

    // Accessing a character at a specific position (using at or operator[])
    char third_char = greeting.at(2);  // 'l'
    char third_char_alt = greeting[2]; // 'l' (caution: may cause issues if out of bounds)

    cout << "First character: " << first_char << endl;
    cout << "Last character: " << last_char << endl;
    cout << "Third character (at): " << third_char << endl;
    cout << "Third character ([]): " << third_char_alt << endl;

    string message = "Welcome";

    // Appending a string
    message.append(" to the program!");

    // Inserting a string at a specific position
    message.insert(7, " back ");

    // Replacing a substring
    message.replace(13, 5, "C++");

    cout << message << endl; // Output: "Welcome back to the C++ program!"

    string name = "Alice";

    // Checking string length
    int length = name.length();

    // Checking if the string is empty
    bool is_empty = name.empty();

    cout << "Name: " << name << endl;
    cout << "Length: " << length << endl;
    cout << "Is empty: " << is_empty << endl; // false

    string sentence = "This is a sample sentence.";

    // Finding the first occurrence of a substring
    size_t pos = sentence.find("sample");

    if (pos != string::npos)
    {
        cout << "Found substring at position: " << pos << endl;
    }
    else
    {
        cout << "Substring not found." << endl;
    }

    return 0;
}
