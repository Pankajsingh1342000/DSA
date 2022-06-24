#include<iostream>
using namespace std;

int search(int arr[], int n, int key, int pivotIndex){
    int left,right;
    if(key >= arr[pivotIndex] && key <= arr[n-1]){
        left = pivotIndex;
        right = n-1;
    }
    else{
        left = 0;
        right = pivotIndex;
    }

    int mid = left + (right - left)/2;

    while(left<=right){
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        mid = left + (right - left)/2;
    }
    return -1;
}

int pivot(int arr[], int n){

    int left = 0, right = n-1;
    int mid = left + (right - left)/2;

    while(left<right){
        if(arr[mid] >= arr[0]){
            left = mid+1;
        }
        else{
            right = mid;
        }
        mid = left + (right - left)/2;
    }
    return left;
}

int main(){
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int pivotIndex = pivot(arr, n);
    cout << search(arr, n, key, pivotIndex);
}