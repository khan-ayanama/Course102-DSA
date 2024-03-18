#include <iostream>
#include <list>
using namespace std;
int main()
{
    // List
    // Initializing list
    list<int> l;

    // Copying List
    list<int> n(l);

    // Initializing list with particular element
    list<int> m(5, 100);

    // List methods
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    // After Erasing
    cout << "After Erasing " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list: " << l.size() << endl;
}