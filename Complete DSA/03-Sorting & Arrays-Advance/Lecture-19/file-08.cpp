#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Priority Queue
    // Maximium Queue
    priority_queue<int> maxi;

    // Minimium priority Queue
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size of Queue: " << maxi.size() << endl;

    int size = maxi.size();

    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(8);
    mini.push(2);
    mini.push(0);

    int minSize = mini.size();

    for (int i = 0; i < minSize; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty or not: " << mini.empty() << endl;
}