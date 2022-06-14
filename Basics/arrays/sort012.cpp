#include<iostream>
using namespace std;

// void sort012(int nums[], int n){
//     int i=0, j=0, k=n-1;
//         while(j<=k-1){
//         if(nums[j]==0){
//             swap(nums[i],nums[j]);
//             i++;
//             j++;
//         }
//         else if(nums[j]==2){
//             swap(nums[k], nums[j]);
//             k--;
//         }
//         else{
//             j++;
//         }
//     }
       
//     for(int i=0; i<n;i++){
//         cout<<nums[i]<<" ";
//     }
// }

void sort012(int arr[], int n){
    int i=0, j=0, k=n-1;
    while(j<=k)
    {
        if(arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j]==1)
        {
            j++;
        }
        else
        {
            swap(arr[j],arr[k]);
            k--;
        }
    }
       
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,1,0,1,2,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr, n);
}