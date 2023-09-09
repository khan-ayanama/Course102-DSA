#include <iostream>
using namespace std;

int power(int n)
{
    if (n == 0)
        return 1;

    return 2 * power(n - 1);
}

void printCounting(int n)
{
    if (n < 0)
        return;

    printCounting(n - 1);
    cout << n << endl;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
        return 1;
    int fun1 = fibonacci(n - 1);
    int fun2 = fibonacci(n - 2);
    int ans = fun1 + fun2;
    return ans;
}

int numberOfWays(int n)
{
    if (n < 2)
        return 1;

    return numberOfWays(n - 1) + numberOfWays(n - 2);
}

int main()
{
    // Power of 2
    // int n = 6;
    // int ans = power(n);
    // cout << ans << endl;

    // Print Counting
    // printCounting(10);

    // Printing nth Fibonacci number
    int ans = fibonacci(5);
    cout << "fibo -> " << ans << endl;

    // Number of ways you can climb the staris
    // int ans = numberOfWays(3);
    // cout << "ways " << ans << endl;
}
