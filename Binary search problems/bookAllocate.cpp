#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int>arr, int n, int m){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int start = 0, end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}

int main(){
    vector<int>arr = {10, 20, 30, 40};
    int n = arr.size();
    int m = 2;
    int ans = allocateBooks(arr, n, m);
    cout<<ans;
}