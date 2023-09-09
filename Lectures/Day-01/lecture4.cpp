#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        for (int j = 1; j <= i - 1; j++)
        {
            cout << '*' << " ";
        }

        for (int j = 1; j <= i - 1; j++)
        {
            cout << '*' << " ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << n - j + 2 - i << " ";
        }
        cout << endl;
    }
}