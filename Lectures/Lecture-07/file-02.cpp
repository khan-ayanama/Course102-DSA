#include <iostream>
using namespace std;
int main(){
    // NUMBER IS POWRE OF TWO?
    int number = 16;
    if(number<=0) return false;
    bool isPowerOfTwo = (number&(number-1))==0;
    cout<<"Whether "<<number<<" is powr of two "<<isPowerOfTwo<<endl;
}