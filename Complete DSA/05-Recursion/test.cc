#include <iostream>
using namespace std;

int waysToReachStairs(int num)
{
    // if (num < 0)
    //     return 0;
    // if (num == 0)
    //     return 1;

    if (num < 2)
        return 1;

    return waysToReachStairs(num - 1) + waysToReachStairs(num - 2);
}

int main()
{
    int num = 5;
    int ans = waysToReachStairs(num);
    cout << "waysToReachStairs " << ans << endl;
}