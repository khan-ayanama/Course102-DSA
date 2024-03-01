#include <iostream>
using namespace std;
int main()
{
    // Taking Integer from User
    int number;
    cout<<"Enter the number ";
    cin>>number;

    // Program to compare two numbmers
    int num1 = 5;
    int num2 = 8;

    if (num1>num2) 
    {
        cout<<"Number 1 is greater"<<endl;
    }else if(num1==num2){
        cout<<"Both the numbers are equal"<<endl;
    }else{
        cout<<"Number 2 is greater"<<endl;
    }
    

}