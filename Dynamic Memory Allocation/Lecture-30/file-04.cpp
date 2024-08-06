#include <iostream>
using namespace std;

// Here start is default argument
void print(int arr[],int n, int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    // Default Arguments
    // Default argument will be on the rightmost
    int arr[5] = {1,4,7,8,9};

    // CONST VARIABLE
}