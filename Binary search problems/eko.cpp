#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool(isPossible(vector<int>wood, int n, int meter, int mid)){
    int meterCount = 0;
    
    for(int i=0; i<n; i++){
        if(wood[i]>mid){
            meterCount += (wood[i] - mid);
        }
    }

    if(meterCount < meter){
        return false;
    }
    else{
        return true;
    }
}

maximumHeight(vector<int>wood, int n, int meter){
    sort(wood.begin(), wood.end());
    int start = 0, end = wood[n-1];
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(isPossible(wood,n,meter,mid)){
            ans = mid;
            start = mid+1; 
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>wood = {4, 42, 40, 26, 46};
    int meter = 20;
    int n = wood.size();
    int ans = maximumHeight(wood, n, meter);
    cout<<ans;
}