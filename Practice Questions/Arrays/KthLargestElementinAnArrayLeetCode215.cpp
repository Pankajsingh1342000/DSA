#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// This Is Average Approach

int findKthLargestAverageApproach(vector<int>& nums, int k){
    priority_queue<int> pq(nums.begin(), nums.end());
    int ans = 0;
    while(k--){
        ans = pq.top();
        pq.pop();
    }
    return ans;
}

// This Is Best Approach

int findKthLargestBestApproach(vector<int>& nums, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int i=0; i<nums.size(); i++){
        pq.push(nums[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;

    cout<<findKthLargestAverageApproach(nums, k);
    cout<<endl;
    cout<<findKthLargestBestApproach(nums, k);
}