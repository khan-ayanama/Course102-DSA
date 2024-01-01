# include <iostream>
using namespace std;

int factorial(int number){
    if(number == 0) return 1;
    return number * factorial(number - 1);
}

void printCounting(int count){
    if(count == 0) return;

    printCounting(count - 1);
    cout<<count<<" ";
}

int raiseToPowerOfTwo(int power){
    if(power == 0) return 1;
    return 2 * raiseToPowerOfTwo(power - 1);
}

int nthFibonacciNumber(int number){
    if(number == 0) return 0;
    if(number == 1) return 1;

    return nthFibonacciNumber(number-1) + nthFibonacciNumber(number-2);
}

int numberOfWaysToReachAtNthStair(int stairs){
    if (stairs < 2) return 1;
    return numberOfWaysToReachAtNthStair(stairs - 1) + numberOfWaysToReachAtNthStair(stairs - 2);
}

void sayDigits(int number,string digits[]){
    if(number==0) return;
    int digit = number%10;
    number = number/10;
    
    sayDigits(number, digits);
    cout<<digits[digit];
}

int main(){
    // Printing Factorial
    // int number = 5;
    // int factorialOfNumber = factorial(number);
    // cout<<"Factorial is "<<factorialOfNumber<<endl;

    // Print Counting
    // int count = 10;
    // printCounting(count);

    // Raise to the power of Two
    // int power = 6;
    // int resultant = raiseToPowerOfTwo(power);
    // cout<<"Power of Two is "<<resultant<<endl;

    // Printing nth Fibonacci number
    int fibonacci = 10;
    int ans = nthFibonacciNumber(fibonacci);
    cout<<"Fibonacci is "<<ans<<endl;

    // Number of Ways to Reach nth Stairs
    int numberOfStairs = 3;
    int waysToReachStair = numberOfWaysToReachAtNthStair(numberOfStairs);
    cout<<"Ways to reach "<<waysToReachStair<<endl;

    // Say Digit

    string Digits[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    int Number = 54321;
    sayDigits(Number,Digits);
}