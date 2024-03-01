#include <iostream>

int main() {
    // Declaring an unsigned integer
    unsigned int myUnsignedInt = 42;

    // Printing the value
    std::cout << "Unsigned Integer: " << myUnsignedInt << std::endl;

    return 0;


    // myUnsignedInt is an unsigned integer with a value of 42. The keyword unsigned indicates that this variable can only hold non-negative values. If you try to assign a negative value to an unsigned integer, the result will wrap around and behave as if you had assigned the equivalent positive value.

    // Keep in mind that the range of values an unsigned integer can represent is from 0 to UINT_MAX, where UINT_MAX is a constant representing the maximum value that can be held by an unsigned integer in your specific system.
}
