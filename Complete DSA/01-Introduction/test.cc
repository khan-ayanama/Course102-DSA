#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // int decimalNumber = 5;
    // int binaryDigit = 0;
    // int i = 0;

    // while (decimalNumber)
    // {
    //     int bit = decimalNumber & 1;

    //     binaryDigit = bit * pow(10, i) + binaryDigit;
    //     i++;
    //     decimalNumber = decimalNumber >> 1;
    // }
    // cout << "Binary Conversion is: " << binaryDigit << endl;

    // Binary to Decimal
    int binaryDigit = 1010;
    int decimalNumber = 0;
    int i = 0;
    while (binaryDigit)
    {
        int lastDigit = binaryDigit % 10;

        decimalNumber = lastDigit * pow(2, i) + decimalNumber;
        binaryDigit = binaryDigit / 10;
        i++;
    }

    cout << "Decimal Number: " << decimalNumber << endl;
}