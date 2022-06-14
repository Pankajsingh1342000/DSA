#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left=0, right = n-1;
    int mid = left + ((right - left)/2);
    while(left<=right){
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }

        mid = left + ((right - left)/2);
    }
    return -1;
}

int main(){
    int arr[]={3,5,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
}