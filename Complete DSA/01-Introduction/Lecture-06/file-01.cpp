#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // Decimal to Binary
    int num = 5;
    int count = 0;
    int ans = 0;
    while (num!=0)
    {
        int bit = num & 1;
        ans = bit*pow(10,count) + ans;
        ans = bit*pow(10,count) + ans;
        num = num>>1;
        count++;
    }
    cout<<"Answer is "<<ans<<endl;

    // Binary to Decimal
    int binary = 101;
    int ans = 0;
    int count = 0;
    while (binary)
    {
        int lastDigit = binary%10;
        ans = ans + pow(2,count);
        binary = binary/10;
        count++;
    }
    cout<<"Decimal converision of "<<binary<<" is "<<ans<<endl;
}