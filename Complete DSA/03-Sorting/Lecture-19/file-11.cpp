#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(11);

    cout << "Finding 6: " << binary_search(v.begin(), v.end(), 6);

    cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Maximium: " << max(a, b) << endl;
    cout << "Maximium: " << min(a, b) << endl;

    swap(a, b);

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String: " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After rotating: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}