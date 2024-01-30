#include <iostream>
using namespace std;
int main(){
    // Logical AND (&&): Returns true if both operands are true, otherwise false.

    bool a = true;
    bool b = false;
    bool result = a && b;  // result is false

    // Logical OR (||): Returns true if at least one of the operands is true, otherwise false.

    bool c = true;
    bool d = false;
    bool result2 = c || d;  // result2 is true

    // Logical NOT (!): Returns the opposite of the operand's truth value. If the operand is true, ! makes it false, and vice versa.

    bool e = true;
    bool result3 = !e;  // result3 is false
}