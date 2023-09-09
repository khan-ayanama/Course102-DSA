#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // kuch change hoga?? --> NO

    // *p = *p + 1;
    // Kuch change hoga?? --> YES

    // **p2 = **p2 + 1;
    // Kuch change hoga??
}
int main()
{
    // DOUBLE POINTERS & FUNCTIONS

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl
         << endl;

    cout << "Before " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;

    update(p2);

    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;

    cout << endl
         << endl;
}