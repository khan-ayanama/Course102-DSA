#include <iostream>
using namespace std;
int lastIndex(int arr[],int size,int key){

    int ans = -1;
    int start = 0;
    int end = size-1;

    

    for (int i = 0; i <= end; i++)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
    
}

int firstOccurence(int arr[], int size, int key) {
    int ans = -1;
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // move left to find the first occurrence
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    // Example array
    int arr1[5] = {0, 2, 2, 2, 2};

    int ans1 = lastIndex(arr1, 5, 2);
    cout << "Last Index: " << ans1 << endl;

    int ans2 = firstOccurence(arr1, 5, 2);
    cout << "First Occurence: " << ans2 << endl;

    return 0;
}