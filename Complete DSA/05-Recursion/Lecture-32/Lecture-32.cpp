#include <iostream>
using namespace std;
int nthFibonacciNumber(int number){
    // Base Case
    if(number == 0) return 0;
    if(number == 1) return 1;

    // Recursive Relation
    return nthFibonacciNumber(number - 1) + nthFibonacciNumber(number - 2);
}

int numberOfWaysToReachAtNthStair(int nthStair){
    // Base Case
    if(nthStair<2) return 1;

    // Recursive Relation
    return numberOfWaysToReachAtNthStair(nthStair-1) + numberOfWaysToReachAtNthStair(nthStair-2);
}

void sayDigit(int number,string arr[]){
    // Base Case
    if(number == 0) return;

    // Process
    int digit = number%10;
    number = number/10;

    // Recursive Relation(R.R)
    sayDigit(number,arr);
    cout<<"Digit: "<<arr[digit]<<endl;
}

int main(){
    // Printing nth fibonacci number
    // int ans = nthFibonacciNumber(10);
    // cout<<"nth Fibonacci number is "<<ans<<endl;

    // Number of ways to reach at nth stair
    // int ans = numberOfWaysToReachAtNthStair(6);
    // cout<<"Number of ways "<<ans<<endl;

    // Say Digit
    string digits[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    sayDigit(543,digits);
}