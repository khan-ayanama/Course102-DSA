#include <iostream>
using namespace std;

// Fibbonaci number
int fib(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

// printing Number of ways to reach stairs nth position
int countDistinctWays(int nStairs)
{
    //  Write your code here.
    if (nStairs < 2)
        return 1;

    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

void sayDigit(int n, string arr[])
{
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);
    cout << arr[digit] << endl;
}

int main()
{
    // Printing nth fibonacci number
    // int n = 5;
    // int ans = fib(n);
    // cout << ans << endl;

    // printing Number of ways to reach stairs nth position
    // int n = 3;
    // int ans = countDistinctWays(n);
    // cout << ans << endl;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(701, arr);
}