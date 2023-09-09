#include <iostream>
using namespace std;
int main()
{
    // int n = 10;
    // int n1 = 0;
    // int n2 = 1;
    // cout << n1 << " " << n2 << " ";
    // for (int i = 0; i < n; i++)
    // {
    //     int nextNum = n1 + n2;
    //     cout << nextNum << " ";
    //     n1 = n2;
    //     n2 = nextNum;
    // }

    // Post and pre increment
    int a = 1;
    // After assigning value of b = a==1 then it increases the value of a to a==2
    int b = a++;
    cout << b << endl;
    cout << a << endl;
    int c = ++a;
    cout << c;
}