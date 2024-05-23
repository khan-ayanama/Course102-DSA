#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // Difference between product and sum of the digits of an integer
   /*int number = 12345;
    int sumOfDigit = 0;
    int productOfDigit=1;

        int digit;
    while(number){
        digit = number%10;
        sumOfDigit +=digit;
        productOfDigit *=digit;
        number /=10;
    }

    cout<<"Difference of Digits of an Integer: "<<productOfDigit-sumOfDigit<<endl;
    */

    // Count Number of 1 Bit
    /*int number = 17;
    int count = 0;

    int bit = 0;
    while(number){
        bit = number&1;
        if(bit){
            count++;
        }
        number = number>>1;
    }

    cout<<"Number of 1 bit is: "<<count<<endl;
    */

   // Reverse an Integer
   /*int num = 12345;
   int ans = 0;

   int digit;
   while (num)
   {
    digit = num%10;
    ans = ans*10+digit;
    num /=10;
   }

   cout<<"Reverse Integer: "<<ans<<endl;
   */

    //   Complement of base 10
    int number = 5;
    int ans=0,fac=1;

    while(number){
        int bit = number%2==0;

        ans += fac*bit;
        fac *=2;
        number /=2;
    }
    cout<<ans<<endl;
}