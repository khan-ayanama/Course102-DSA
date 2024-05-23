#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    for (int i = 0; i < size; i++)
    {
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end = mid-1;
        }else{
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }
    
}

int uniqueElement(int arr[],int size){

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int duplicateElement(int arr[],int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans^i;
    }

    return ans;
    
    
}

vector<int> intersectionArray(int arr1[],int size1,int arr2[],int size2){
   vector<int> ans;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr2[j]);
            }
        }
    }
    return ans;
    
}
int main()
{
    // Binary Search
    // int number[7] = {1,5,7,12,31,45,66};
    // int ans = binarySearch(number,7,7);
    // cout<<"Index of number: "<<ans<<endl;

    // Unique Element of an Array
    // int num2[7] = {2,5,6,9,5,6,2};
    // int ans = uniqueElement(num2,7);
    // cout<<"Unique element is: "<<ans<<endl;

    // Duplicate element
    // int num3[7] = {1,2,3,4,5,6,3};
    // int ans = duplicateElement(num3,7);
    // cout<<"Duplicate element: "<<ans<<endl;

    // Intersection of two sorted arrays

    int arr1[7] = {1,2,3,4,5,6,7};
    int arr2[4] = {5,6,7,8};

    vector<int> ans = intersectionArray(arr1,7,arr2,4);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" "; 
    }
    
    
    }