#include <iostream>
using namespace std;
int main()
{
    // #####################    Integer type pointer    ########################
    // int num = 5;

    // cout << "value at num: " << num << endl;

    // Address of number &num

    // cout << "Address at which num is declared: " << &num << endl;

    // Pointers stores address
    // Pointer will be of same data type as value

    // int *p = &num;
    // Here &num is the address which is stored in p, putting the * before p will calculate the value at adress &num which is assigned to p

    // cout << "Value at p is pointing: " << *p << endl;
    // cout << "Address stored at p: " << p << endl;
    // cout << "Size of integer is " << sizeof(num) << endl;
    // cout << "Size of pointer is " << sizeof(p) << endl;

    // ###################  Character type pointer  ######################

    // char ch = 'A';
    // char *p2 = &ch;

    // cout << "Address is : " << p2 << endl;
    // cout << "Value is : " << *p2 << endl;

    // Never declare pointer without initialization if you don't know initialize with null value ---> Segmentation fault
    // int *p = NULL;

    // #####################  Practice with pointer   #########################

    // 1.ACCESSING THE VALUE THROUGH THE POINTER

    // int num = 5;

    // Here value will increase after printing
    // cout << "printing num " << num++ << endl;
    // cout << "printing num " << ++num << endl;

    // cout << "AT First " << num << endl;

    // int *p = &num;
    // cout << "Value printing at P " << *p << endl;
    // cout << "Before: " << num << endl;
    // Here it will increase the value at which p is pointing
    // (*p)++;

    // cout << "AT SECOND " << num << endl;
    // cout << "TESTING First  " << (*p)++ << endl;
    // cout << "AT THIRD " << num << endl;
    // cout << "Testing Second " << ++(*p) << endl;
    // cout << "Testing Third " << (*p)++ << endl;
    // cout << "Testing Fourth " << *p << endl;
    // cout << "Testing Fifth " << p << endl;
    // cout << "After: " << num << endl;

    // ########################  2.COPYING THE POINTER   ######################

    // int num = 5;
    // int *p = &num;

    // Here value of q will be copied not the value at p i.e, *q
    // cout << "Value of only p " << p << endl;
    // int *q = p;
    // cout << "Value of only q " << q << endl;

    // You can't copy p in q because p is pointer int type value and q is int type so diffent type of value
    // int q = p;

    // cout << p << " - " << q << endl;
    // cout << *p << " - " << *q << endl;

    // #######################   3.POINTER ARITHMATIC    ########################

    // int i = 3;
    // int *t = &i;
    // *t = *t + 1;
    // It will increase the value of i
    // cout << *t << endl;

    // Increasing the address
    // cout << "before t = t + 1 --> " << t << endl;
    // t = t + 1;
    // cout << "before t = t + 1 --> " << t << endl;
    // cout << "Value now t is pointing --> " << *t << endl;
}