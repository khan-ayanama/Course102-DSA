#include <iostream>
using namespace std;

int powerOfTwo(int power){
    if(power==0) return 1;

    return 2*powerOfTwo(power-1);
}

int factorial(int num){
    if(num==0) return 1;

    return num*factorial(num-1);
}

void printCounting(int number){
    if(number == 0) return;
    printCounting(number-1);
    cout<<number<<" ";
}

int fibonacciSequence(int num){
    if(num == 0) return 0;
    if(num==1) return 1;

    int ans = fibonacciSequence(num-1) + fibonacciSequence(num-2);
    return ans;
}

int numberOfWaysToReachAtNthStair(int stairs){
    if(stairs < 2) return 1;

    return numberOfWaysToReachAtNthStair(stairs - 1) + numberOfWaysToReachAtNthStair(stairs - 2);
}

int main(){
    // 1. Power of Two
    // int ans = powerOfTwo(5);
    // cout<<"Ans: "<<ans<<endl;

    // 2. Factorial
    // int factor = factorial(5);
    // cout<<"factorial: "<<factor<<endl;

    // 3. Print Counting
    // printCounting(10);

    // 4. Fibonacci Seris
    // int ans = fibonacciSequence(9);
    // cout<<"fibonaacci: "<<ans<<endl;

    // 5. waysto reach stairs
    int ans = numberOfWaysToReachAtNthStair(3);
    cout<<"Ways: "<<ans<<endl;
}