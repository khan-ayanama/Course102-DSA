#include <iostream>
using namespace std;

// Finding wheter number is odd or not
void isOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is Even" << endl;
        return;
    }
    cout << "Number is Odd" << endl;
}

// Printing fibonacci
void fibonacci(int num)
{
    int a = 0;
    int b = 1;
    cout << "Fibonacci Numbers: " << a << " " << b << " ";
    for (int i = 0; i < num - 2; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
}

void dummy(int n)
{
    n++;
    cout << " n is " << n << endl;
}
int main()
{
    // ##########################   FUNCTIONS    ##########################

    // 1. Integer is Odd or Even
    isOdd(8);

    // Printing fibonacci numbers
    fibonacci(10);

    // Pass by Value

    int n;
    cin >> n;

    dummy(n);

    cout << "number n is " << n << endl;

    return 0;
}
