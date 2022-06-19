#include<iostream>
using namespace std;
#include<vector>

int peakElement(vector<int> arr){
    int left = 0, right = arr.size()-1;
    int mid = left + (right - left)/2;
    while(left <= right){
        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
            return mid;
        }
        if(arr[mid]<arr[mid+1]){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
        mid = left + (right - left)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {24,69,100,99,79,78,67,36,26,19};

    cout<<"Peak Element At Index = "<< peakElement(arr);
}