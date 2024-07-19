#include <iostream>
using namespace std;

int uniqueElementOfAnArray(int arr[],int size){
    int uniqueElement=0;

    for (int i = 0; i < size; i++)
    {
        uniqueElement = uniqueElement^arr[i];
    }
    return uniqueElement;
    
}

int duplicateInArray(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    
    return ans;
    
}




int main(){
    // Unique Element of an Array
    int arr1[7] = {1,2,3,4,4,2,1};

    int ans1 = uniqueElementOfAnArray(arr1,7);
    cout<<"Unique element is: "<<ans1<<endl;

    int arr2[7] = {1,2,3,4,3,5,6};
    int ans2 = duplicateInArray(arr2,7);
    cout<<"Duplicate element: "<<ans2<<endl;

    cout<<"Hello";
}