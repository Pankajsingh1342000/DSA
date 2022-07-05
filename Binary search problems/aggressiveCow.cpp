#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> stalls, int n, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++){
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCow(vector<int> stalls, int k){
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int start = 0;
    int end = stalls[n-1];
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(isPossible(stalls, n, k, mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    vector<int> stalls = {4, 2, 1, 3, 6};
    int k = 2;
    int ans = aggressiveCow(stalls, k);
    cout<<ans;
}