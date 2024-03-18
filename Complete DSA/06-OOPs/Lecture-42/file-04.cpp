#include <iostream>
using namespace std;

class MyClass
{
private:
    int x;

public:
    void setX(int x)
    {
        this->x = x; // 'this' refers to the current object
    }

    void displayX()
    {
        cout << "Value of x: " << this->x << endl;
    }
};

int main()
{
    // This keyword
    // this is pointer
    MyClass obj;
    obj.setX(42);
    obj.displayX();

    return 0;
}
