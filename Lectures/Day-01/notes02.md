# Notes - 02

## Bitwise AND (&)

Both bit must be 1

* 0 & 0 --> 0
* 1 & 0 --> 0
* 1 & 1 --> 1

## Bitwise OR (|)

Atleast one of the bit is 1

## Bitwise NOT (~)

Reverse the bit if 1 then 0 or vice-versa.

## Bitwise XOR (^)

* If different bits --> 1  
* If same bits --> 0

## Left Shift (<<)

Move the bit in the left direction and usually padding is done with Zero in postive numbers

## Rigth Shift (<<)

Move the bit in the right direction and usually padding is done with Zero in postive numbers.

## Increment / Decrement

### Post/Pre decrement & Post/Pre Increment

## Functions in C++

```c++
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
```
