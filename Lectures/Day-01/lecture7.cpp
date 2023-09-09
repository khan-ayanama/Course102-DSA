#include <iostream>
using namespace std;
int main()
{
    // 1.Revere an Integer

    /*long long int n = 123456789;
    long long int ans = 0;
    while (n)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        if (ans > INT32_MAX || ans < INT32_MIN)
        {
            break;
        }

        n = n / 10;
    }
    cout << ans;*/

    // 2.Complement of Base 10

    /*int n = 5;
    int x = 1;
    while (x <= n)
    {
        n = n ^ x;
        x = x << 1;
    }
    cout << n << endl;*/

    // 3. Is Power of 2

    /*int n = 16;
    if ((n & (n - 1)) == 0)
    {
        cout << "Yes it is power of two";
    }
    else
    {
        cout << "Not a power of 2";
    }*/
}