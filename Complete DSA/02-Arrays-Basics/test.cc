#include <iostream>
using namespace std;
void sortArray(int *arr,int size){
    int start = 0;
    int end = size-1;
    int mid = 0;

    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }

        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}
int main()
{
    // Sort 0,1,2

    int arr[7] = {1,2,0,1,0,2,1};

    sortArray(arr,7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}