#include <iostream>
using namespace std;
int main()
{
    // Declaration of variables

    int i = 5;
    // M-1
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    // M-2
    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    // Operation on Pointers

    int num2 = 7;
    int *p2 = &num2;

    // Operation
    cout << "Before incrementing: " << num2 << endl;
    (*p2)++;
    cout << "After incrementing: " << num2 << endl;

    // Difference between *p2++ and (*p2)++
    cout << *p2++ << endl;
    cout << "check " << (*p2)++ << endl;

    // Copying a pointer
    int *q2 = p2;
    cout << p2 << " - " << q2 << endl;
    cout << *p2 << " - " << *q2 << endl;
}