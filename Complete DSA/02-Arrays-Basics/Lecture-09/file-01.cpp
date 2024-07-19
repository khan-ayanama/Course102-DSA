#include <iostream>
using namespace std;
int main(){
    // ARRAY: An array is a data structure that sequentially stores an element of the same data type.

    // Syntax of an array declaration
    // type array_name[array_size];
    // Example: int numbers[10];

    // DECLARATION OF AN ARRAY

    // 1. Declaration of an array by specifying size
    int arr1[5];
    // 2. Another way of declaration of an array by specifying size
    int n=5;
    int arr2[n];
    // In the above code, the compiler creates an array of size 5. The elements of the array are not initialized. 


    // 3. Declaration of an array by initializing elements
    int arr3[] = {15, 25, 35, 45, 55};
    cout<<"Size of arr3: "<<sizeof(arr3)<<endl;
    // In the above code, the compiler creates an array of size 5*4=20. The Elements of the array are {15, 25, 35, 45, 55}.


    // 4. Declaration of an array by specifying the size and initializing elements
    int arr4[7] = { 15, 26, 28, 60,45 };
    // In the above code, the compiler creates an array of size seven and then initializes the first five elements as specified by the user and the rest two elements as 0.


    // C++ Array Types
    // 1. One-Dimensional
    // One-dimensional arrays in C++ are collections of elements of the same data type arranged in a linear sequence. They are also known as flat arrays.
    // Syntax: Datatype arrayName[arraySize];

    // 2. Multi-Dimensional
    // Multi-dimensional arrays in C++ are used for representing data organized in multiple dimensions such as matrices.
    // Syntax: Datatype arrayName[dimension1Size][dimension2Size];
    // Note: When you initialize a 2D array, you must always specify the second dimension(no. of cols), but providing the first dimension(no. of rows) may be omitted.

}