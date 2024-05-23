#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Deleting middle of stack
    stack<int> num;
    stack<int> elem;
    num.push(4);
    num.push(3);
    num.push(301);
    num.push(29);
    num.push(31);

    int middleElement = num.size()/2;
    int count = 0;

    while(count<=middleElement){
        if (count==middleElement)
        {
            num.pop();
            break;
        } 
        elem.push(num.top());
        num.pop();
        count++;
    }
    while(!elem.empty()){
        num.push(elem.top());
        elem.pop();
    }

    while(!num.empty()){
        cout<<num.top()<<" ";
        num.pop();
    }

}