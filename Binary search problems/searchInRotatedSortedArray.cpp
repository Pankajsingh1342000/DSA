#include<iostream>
using namespace std;
#include<vector>

int pivot(vector<int>arr){
    int left=0, right=arr.size()-1;
    int mid = left + (right - left)/2;
    while(left<right){
        if(arr[mid]>=arr[0]){
            left = mid+1;
        }
        else{
            right = mid;
        }
        mid = left + (right - left)/2;
    }
    return left;
}

int search(vector<int>arr, int pivotIndex, int k){
    int left,right;
    if(k>=arr[pivotIndex] && k<=arr[arr.size()-1]){
        left=pivotIndex, right = arr.size()-1;
    }
    else{
        left = 0, right = pivotIndex;
    }
    int mid = left + (right-left)/2;
    
    while(left<=right){
        if(k == arr[mid]){
            return mid;
        }
        else if(k<arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        mid = left + (right-left)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {7, 8, 1, 3, 5};
    int k = 8;
    int pivotIndex = pivot(arr);
    cout<<search(arr,pivotIndex,k);
}