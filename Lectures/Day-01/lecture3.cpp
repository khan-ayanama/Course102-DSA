#include <iostream>
using namespace std;
int main()
{
    // 1. Number is Prime or Not

    int num = 2;

    int i = 2;

    while (i <= (num / 2))
    {
        if (num == 2)
        {
            return 0;
        }
        if (num % i == 0)
        {
            cout << "Not a prime" << endl;
            return 0;
        }
        i = i + 1;
    }

    cout << "Prime" << endl;
    return 0;
}