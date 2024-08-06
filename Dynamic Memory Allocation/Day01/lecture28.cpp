#include <iostream>
using namespace std;

// Updating value passed by reference
void update(int &m)
{
    m = m + 1;
}

int main()
{
    /*// Dyanamic memory allocation
    // Same memory with different names

    // How to assign different names to same variable

    // int i = 5;

    // Create refeference variable

    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;*/

    /*// Why Reference Variable
    // Pass by reference variable in function

    int n = 5;
    cout << "Value before passing function " << n << endl;

    update(n);

    cout << "Value after passing function " << n << endl;*/

    // Pass by value vs Pass by reference

    // PASS BY VALUES
    // In "pass by value," a copy of the actual argument's value is made and passed to the function. Any changes made to the parameter inside the function do not affect the original argument outside the function.

    // PASS BY REFERENCE
    // In "pass by reference," a reference to the actual argument is passed to the function. Any changes made to the parameter inside the function directly affect the original argument outside the function

    // RETURN BY REFERENCE
}