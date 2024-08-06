# include <iostream>
using namespace std;

int pivotIndex(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }
    return end;
}
int main()
{
    // Pivot index in an array

    int arr[8] = {11, 3, 4, 5, 6, 7, 8, 9 };

    int ans = pivotIndex(arr,8);
    cout<<"Pivot Index: "<<ans<<endl;
}