#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int left = 0, right = n-1;

    while(left<=right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    } 

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, n);
}