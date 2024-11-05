#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if ((size - top) > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is already empty" << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Array is empty" << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    // Stack

    stack<int> s1;

    cout << s1.empty() << endl;

    // Adding value inside stack
    s1.push(2);
    s1.push(89);
    s1.push(32);

    // Is Stack empty
    cout << s1.empty() << endl;

    cout << s1.top() << endl;
    cout << s1.size() << endl;

    Stack s2(5);

    s2.push(2);
    s2.push(2);
    s2.push(2);
    s2.push(2);
    s2.push(12);

    cout << s2.peak() << endl;
    s2.pop();
    cout << s2.peak() << endl;
}