#include <iostream>
using namespace std;
int main()
{
    // Pointers with array

    // int arr[10] = {2, 4, 5};

    // Adress of first block of array

    // cout << "Address of rist memory block of array is " << arr << endl;
    // cout << "Address of rist memory block of array is " << &arr[0] << endl;

    // *arr --> Gives the value at first block of an array

    // cout << "printing *arr " << *arr << endl;
    // cout << "printing *arr " << *arr + 1 << endl;

    // *(arr+1) -> value at 1st location

    // cout << "Value at 1st location " << *(arr + 1) << endl;

    // FORMULA: arr[i] = *(arr + i)
    // FORMULA: i[arr] = *(i + arr)

    //  When you use pointer arithmetic like *(arr + 1), it increments the memory address by one element's size, not one byte.

    // cout << "Printing array with different method " << 2 [arr] << endl;

    // ######  Difference between Pointers and array ######

    // int arr[10] = {2, 4, 23, 12, 5};

    // int *p = arr;
    // int *q = &arr[1];
    // cout << "Prining array when it is assigned directly to arr" << *p << endl;
    // cout << "Prining array when it is assigned  to arr[1] " << *q << endl;

    // If cout<<arr<<endl: gives the address then why cout<<sizeof(arr) gives the size of an array instead of the size of location where address is stored

    // Answer: It is important to note that sizeof is a compile-time operator, meaning that the size it returns is determined during the compilation process based on the array declaration. The array's address is not involved in this process; it's only used at runtime when accessing the elements of the array.

    // int temp[10];

    // int *ptr = &temp[0];

    // cout << "size of address " << sizeof(ptr) << endl;
    // cout << "Size of value referencing by address " << sizeof(*ptr) << endl;
    // cout << "size of an address of pointer " << sizeof(&ptr) << endl;

    // cout << "temp " << sizeof(*temp) << endl;
    // cout << "temp " << sizeof(&temp) << endl;

    // DIFFERENCE PART - 02

    // int a[20] = {1, 2, 3, 4, 5};

    // cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    // cout << "After" << endl;

    // int *p = &a[0];

    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    // Content of symbol table can't be changed
    // What is Symbol Table

    // int arr[1];

    // arr = arr+ 1;   // ERROR you can't change the address segmentation fault

    // int *ptr = &arr[0];
    // cout << ptr << endl;
    // ptr = ptr + 1; // Here address of pointer will move to next block because it's a pointer to an integer
    // array arr has only one element, incrementing the pointer ptr beyond the first element would go out of bounds of the array, causing undefined behavior

    // cout << (ptr) << endl;
}