#include <iostream>
using namespace std;
int main()
{
    // Pointers with character Array

    char ch[6] = "abcde";

    // It will print content of ch not address of ch unlike int type array
    cout << ch << endl;

    char *c = &ch[0];

    // Prints the entire array
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    // It will print until it gets the null value
    cout << p << endl;
}
