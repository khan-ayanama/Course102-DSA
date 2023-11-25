#include<iostream>
using namespace std;

int main()
{
    // PRINTING NUMBER FROM 1 to N

    // int number = 10;
    // int initialNumber = 0;
    // while (initialNumber<=number)
    // {
    //     cout<<initialNumber<<" ";
    //     initialNumber++;
    // }

    // Number is prime or not
    int number = 99;
    int i = 2;
    while (i<number){
        if (number%i==0)
        {
            cout<<"Not Prime";
            return 0;
        }
        i++;
    }
    cout<<"PRIME"<<endl;

    return 0;
}