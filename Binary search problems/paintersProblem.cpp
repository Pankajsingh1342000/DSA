#include<iostream>
using namespace std;
#include<vector>

bool isPossible(vector<int> boards, int n, int k, int mid){
    int painterCount = 1;
    int larDistance = 0;

    for(int i=0; i<n; i++){
        if(larDistance + boards[i] <= mid){
            larDistance += boards[i];
        }
        else{
            painterCount++;
            if(painterCount > k || boards[i] > mid){
                return false;
            }
            larDistance = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> boards, int n, int k){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += boards[i];
    }
    int start = 0, end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(isPossible(boards, n, k, mid)){
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
    vector<int> boards = {10, 20, 30, 40};
    int n = boards.size();
    int k = 2;
    int ans = findLargestMinDistance(boards, n, k);
    cout<<ans;
}