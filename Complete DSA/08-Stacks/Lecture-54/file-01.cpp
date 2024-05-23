#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Stack -> (LIFO) Last in, first out structure

    // Creation of stack
    stack <int> s;

    // push operation
    s.push(2);
    s.push(3);

    cout<<"printing top element: "<<s.top()<<endl;

    // pop operation
    s.pop();

    cout<<"Printing top element: "<<s.top()<<endl;

    // Checking whether stack is empty or what's it size
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"Size of stack: "<<s.size()<<endl;
    }

}