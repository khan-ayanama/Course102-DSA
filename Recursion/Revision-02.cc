#include <iostream>
using namespace std;
bool isArraySorted(int arr[],int size){
    if(size==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;

    return isArraySorted(arr,size-1);
}

int sumOfArray(int arr[],int size){
    if(size==0) return 0;
    if(size == 1) return arr[0];
    return arr[0] + sumOfArray(arr+1,size-1);;
}

bool linearSearchOfElement(int arr[],int key, int size){
    if(size == 0) return false;
    if(arr[0] == key) return true;

    return linearSearchOfElement(arr+1,key,size-1);
}

bool binarySearchOfElement(int arr[],int start,int end,int key){
    int mid = start + (end-start)/2;
    if(start>end) return false;
    if(arr[mid] == key) return true;
    if(arr[mid] < key) return binarySearchOfElement(arr,mid+1,end,key);
    if(arr[mid]>key) return binarySearchOfElement(arr,start,mid-1,key);
}

bool myfunc(int arr[]){
    return arr[2];
}

bool checkPalindrome(string str,int i, int j){
    if(i>j) return true;
    if(str[i]!= str[j]) return false;
    return checkPalindrome(str,i+1,j-1);
}
void reverseString(string &str,int i, int j){
    if(i>j) return;
    swap(str[i],str[j]);
    reverseString(str,i+1,j-1);
}
int main()
{
    // int numbers[] = {11,22,31,44,55};
    // int a = 5;

    // isArraySorted
    // int isSorted = isArraySorted(numbers,5);
    // cout<<isSorted<<endl;

    // sumOfArray
    // int sum = sumOfArray(numbers,5);
    // cout<<"Sum of an Array "<<sum<<endl;

    // LinearSearch
    // bool isPresent = linearSearchOfElement(numbers,14,5);
    // cout<<"Element present "<<isPresent;

    // BinarySearch
    // bool isPresent = binarySearchOfElement(numbers,0,5,55);
    // cout<<"Element present "<<isPresent;
    // cout<<a<<endl;
    // cout<<myfunc(numbers)<<endl;

    // Check Pallindrome
    // string name = "abba";
    // bool isPalindrome = checkPalindrome(name,0,name.length()-1);
    // cout<<isPalindrome;

    // Reverse a String
    string characters = "abcdefgh";
    reverseString(characters,0,characters.length()-1);
    cout<<characters;
}