#include <iostream>
#include <math.h>
using namespace std;

int myFunc1(int num){
    return num+1;
}

void myFunc2(int* num){
    *num -=1;
}

int main()
{
    // pass by value
    int a = 5;
    int ans1 = myFunc1(a);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of ans1: "<<ans1<<endl;

    // Pass by Pointer
    int b = 5;
    myFunc2(&b);
    cout<<"Value of b: "<<b<<endl;
}