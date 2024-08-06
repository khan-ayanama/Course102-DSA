#include <iostream>
using namespace std;
int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // Variable size array by using heap memory --> Dynamic memory allocation
    // 'new' keyword

    /*int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "Answer is " << ans << endl;*/

    // STATIC VS DYNAMIC MEMORY ALLOCATION

    /*
Static Memory Allocation:
    * Global variables.
    * Constants.
    * Variables that do not change in size or need throughout the program's execution.

Dynamic Memory Allocation:
    * Data structures that grow or shrink in size (e.g., linked lists, dynamic arrays).
    * When the size of the data structure is not known at compile time.
    * Applications requiring complex memory management, such as dynamic simulations, databases, etc.
*/
}