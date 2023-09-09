#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // 1. Decimal to Binary

    /*int n = 5;
    int ans = 0;
    int i = 0;
    while (n)
    {
        int bit = n & 1;
        ans = bit * pow(10, i) + ans;
        i++;
        n = n >> 1;
    }
    cout << ans << endl;*/

    // 2. Binary to Decimal

    /*int n = 11001;
    int i = 0;
    int ans = 0;
    while (n)
    {
        int digit = n % 10;
        if (digit)
        {
            ans = digit * pow(2, i) + ans;
        }
        i++;
        n = n / 10;
    }
    cout << ans << endl;*/

    // 3. Negative deecimal number to binary

    //     long long int n = -5;
    //     unsigned long long int i = 0, ans = 0;
    //     if (n < 0)
    //     {
    //         n = pow(2, 16) + n;
    //     }

    //     cout << "Value of n is " << n << endl;

    //     while (n)
    //     {
    //         int bit = n & 1;
    //         ans = (bit * pow(2, i)) + ans;
    //         n = n >> 1;
    //         i++;
    //     }
    //     cout << ans << endl;
    // }

    // Method-2: converting decimal number to binary;
    // It is not working due to compilation error try online

    long long int n = -5;
    long long int ans = 0;
    unsigned long long int i = 0;

    if (n < 0)
    {
        n = n * (-1);
        while (n)
        {
            int bit = n & 1;
            cout << "Bit is " << bit << endl;
            ans = bit * pow(10, i) + ans;
            cout << "Answer is " << ans << endl;
            n = n >> 1;
            cout << "Value of n " << n << endl;
            i = i + 1;
            cout << "value of i " << i << endl;
        }
        int newAns = (~ans);
        newAns = newAns + 1;
        cout << "Decimal to Binary is " << newAns << endl;
    }
}