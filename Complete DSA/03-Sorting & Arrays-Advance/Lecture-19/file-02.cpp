#include <iostream>
#include <array>
using namespace std;
int main()
{
    // <array>

    // Declaration of an array: array<DataType,Size> name=value

    array<int,4> num = {1,2,3,4};

    // Size of an array
    int size = num.size();

    // Accessing array elements
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    
    // Element at particular index
    cout<<"Element at 2nd Index: "<<num.at(2)<<endl;

    // Array is empty or not
    cout<<"Empty or Not: "<<num.empty()<<endl;

    // First and Last Element
    cout<<"First Element: "<<num.front()<<endl;
    cout<<"Last Element: "<<num.back()<<endl;
}