#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int printCounting(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = printCounting(n - 1);
    cout << n << endl;
}

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 2 * power(n - 1);
}

int main()
{
    // RECURSION
    // When a function call's itself

    // Base Case --> Where you want to stop

    // Segmentation Fault
    // this happens when a program tries to read from or write to a memory address that it doesn't have permission to access

    // Tail Recursion
    /*
     * Function(){
     * BASE CASE
     * PROCESSING
     * RECURSIVE RELATION (Recursive Relation afte processing)
     *}
     */

    // Head Recursion
    /**
     * Function(){
     *  * BASE CASE
     *  * RECURSIVE RELATION (Recursive Relation before processing)
     *  * PROCESSING
     * }
     */

    // Printing factorial
    // int n = 5;
    // int ans = factorial(n);
    // cout << ans;

    // Print Counting
    // int n = 5;
    // int ans = printCounting(n);
    // cout << "Answer in main " << ans << endl;

    // Power of 2
    int n = 6;
    int ans = power(n);
    cout << "power of 2 is " << ans << endl;
}