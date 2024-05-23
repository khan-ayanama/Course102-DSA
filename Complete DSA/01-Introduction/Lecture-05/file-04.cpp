#include <iostream>
using namespace std;
int main()
{
    // Printing a number from 1 to N
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // Print first N fibonacci number
    int a = 10;

    int firstNum = 0;
    int secondNum = 1;
    int temp = 0;

    cout<<"Fibonacci Series: "<<firstNum<<" "<<secondNum<<" ";
    for (int i = 1; i <= a-2; i++)
    {
        cout<<firstNum+secondNum<<" ";
        temp = firstNum+secondNum;
        firstNum = secondNum;
        secondNum = temp;
    }
    
    
}