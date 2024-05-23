#include <iostream>
#include <queue>
using namespace std;
int main(){
    // Queue 
    // Data structure of (FIFO) -> First in first out
     
    //  Creating a queue
    queue<int> q;
    q.push(11);
    q.push(26);
    q.push(14);

    cout<<"Size of queue: "<<q.size()<<endl;
    q.pop();

    cout<<"Is empty: "<<q.empty()<<endl;
    cout<<"Is empty: "<<q.front()<<endl;
}