#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Queue
    queue<string> q;
    q.push("Robert");
    q.push("Downey");
    q.push("Junior");

    cout << "Size of Queue: " << q.size() << endl;

    cout << "First Element: " << q.front() << endl;

    // Popping element
    q.pop();

    cout << "Size after Popping: " << q.size() << endl;
}