#include <iostream>
using namespace std;
#include <stack>
int main()
{
    // Stack
    stack<string> s;

    s.push("Ayan");
    s.push("Khan");
    s.push("Zod");

    // Accessing elements in stack
    cout << "Element at Top: " << s.top() << endl;
    s.pop();
    cout << "Element at Top: " << s.top() << endl;

    cout << "Empty or Not: " << s.empty() << endl;
}