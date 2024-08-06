#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "Value of *p " << *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
    p = p + 1;
    cout << "After updating in func " << p << endl;
}

int getSum(int *arr, int size)
{
    // Here it will print the size of address not an array which was expected to be --> 20
    cout << "Size: " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // POINTERS WITH FUNCTION

    // Printing value of pointer through function
    int value = 5;
    int *p = &value;
    print(p);

    // Updating the vlaue of pointer

    cout << "Before updating " << p << endl;

    update(p);

    // Here value will be same as before becoz value is updated in update function not in man function
    cout << "After updating in main " << p << endl;

    // But if we increase the value of *p in function it will increase the value of *p everywhere becoz in function it will look the value in main function
    cout << "After increasing the value " << *p << endl;

    // When we pass array in the function we actually pass the pointer not a  complete array

    int arr[6] = {1, 2, 3, 4, 5, 8};
    cout << "sum of complete array: " << getSum(arr, 5) << endl;
    cout << "sum of part array: " << getSum(arr + 3, 3) << endl;
}