#include <iostream>
using namespace std;
int main()
{
    // Pointers
    // Symbol Table --> Variable name will be mapped to particular address in symbol table.
    int num = 5;
    cout << "Value of Num: " << num << endl;

    // Operator of Address --> &
    cout << "Address of Variable: " << &num << endl;

    // Pointers store the address type of data in it which is hexadecimal.
    // Never intialize pointer without declaration of variable.
    int *ptr = &num;
    // Here it means, ptr is a pointer to int
    // * is a dereference operator
    // *num is value at address.

    int num2 = 7;
    int *num2Ptr = &num2;

    cout << "Value of num2: " << num2 << endl;
    cout << "Address of num2: " << &num2 << endl;
    cout << "Address of pointer: " << num2Ptr << endl;
    cout << "Value at pointer: " << *num2Ptr << endl;
    bool isEqual = num2Ptr == &num2;
    cout << "Check Address: " << isEqual << endl;
    cout << "Size of Integer: " << sizeof(num2) << endl;
    cout << "Size of pointer: " << sizeof(num2Ptr) << endl;
    cout << "Size of pointer: " << sizeof(*num2Ptr) << endl;
}