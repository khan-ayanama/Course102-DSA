#include <iostream>
using namespace std;
int main()
{
    // DOUBLE POINTERS

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Printing the value " << p << endl;
    cout << "Printing address of p " << &p << endl;
    cout << "Printing the value pointing by p" << *p2 << endl;

    // Printing the value of p
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    // printing the address of p

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
}