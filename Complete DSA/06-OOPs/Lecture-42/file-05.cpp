#include <iostream>
using namespace std;

class MyClass
{
private:
    int data;

public:
    // Default constructor
    MyClass() : data(0) {}

    // Parameterized constructor
    MyClass(int value) : data(value) {}

    // Copy constructor
    MyClass(const MyClass &other)
    {
        data = other.data; // Copying data from 'other' object
        cout << "Copy constructor called" << endl;
    }

    // Getter method
    int getData() const
    {
        return data;
    }
};

int main()
{
    MyClass obj1(42); // Creating object 'obj1' with value 42

    // Using the copy constructor to create 'obj2' as a copy of 'obj1'
    MyClass obj2 = obj1;

    // Displaying data of both objects
    cout << "Data in obj1: " << obj1.getData() << endl;
    cout << "Data in obj2: " << obj2.getData() << endl;

    return 0;
}

// Default copy consturcot make shallow copy