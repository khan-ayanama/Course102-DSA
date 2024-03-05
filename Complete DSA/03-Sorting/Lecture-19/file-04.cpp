#include <iostream>
using namespace std;
#include <deque>
int main()
{
    // Deque
    // Initializing deque
    deque<int> d;

    // Operation on Deque
    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    // d.pop_front();

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << "Print at First Index: " << d.at(0) << endl;

    cout << "Front Element: " << d.front() << endl;
    cout << "Back Element: " << d.back() << endl;

    cout << "Empty or Not: " << d.empty() << endl;

    cout << "Size of Deque: " << d.size() << endl;

    // Erasing Deque
    d.erase(d.begin(), d.begin() + 1);

    cout << "After Erasing" << endl;

    for (auto i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}