#include <iostream>
using namespace std;
int main()
{
    // Pointer Arithmatic
    int i = 3;
    int *t = &i;
    cout << *t << endl;
    cout << t << endl;
    // Here it increase the value of address by 4 bit for example 0 to 4
    cout << *t++ << endl;

    cout << *t << endl;
    cout << t << endl;
}