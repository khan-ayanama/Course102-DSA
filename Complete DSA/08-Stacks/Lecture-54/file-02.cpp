#include <iostream>
using namespace std;

// Implementaion of stack with Array
class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
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
            cout << "Stack underflow" << endl;
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
            cout << "Stack is empty" << endl;
            return -1;
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
    // Stack Implementation
    Stack st(5);

    st.push(23);
    st.push(32);
    st.push(54);
    st.push(11);

    cout << st.peak() << endl;

    st.pop();
    st.pop();
    st.pop();

    cout << st.peak() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is Emtpy!!" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}

// H.W --> Implement Stack with Linked List