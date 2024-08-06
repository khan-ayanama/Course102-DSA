#include <iostream>
using namespace std;

inline int getMax(int a, int b){
    return (a>b)?a:b;
}
int main()
{
    // Inline function
    // Inline functions get replaced at the time of compiling time

    int a = 1, b=2;
    
    int ans = 0;

    // inline function
    ans = getMax(a,b);

    a = a+ 3;
    b = b + 1;

    
}