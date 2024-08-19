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
    // THEORY:-
    // Recursion: When Function call's itself
    // Usage: When Big and Complex problem depends upon small problem then we use recursion.
    // Base Case: Where you want to stop the program
    // Segmentation Fault: It happens when a program tries to read or write from a memory address which doesn't have permission to access

    // Tail Recursion
    /*
     * Function(){
     * BASE CASE
     * PROCESSING
     * RECURSIVE RELATION (Recursive Relation afte processing)
     *}
     */

    // Head Recursion
    /*
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