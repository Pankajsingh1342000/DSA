#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> ans;
void helper(vector<int> candidates, int target, int i, int curSum, vector<int>temp){
    if(curSum>target){
        return;
    }
    if(i==candidates.size()){
        if(curSum==target){
            ans.push_back(temp);
        }
        return;
    }
    curSum+=candidates[i];
    temp.push_back(candidates[i]);
    helper(candidates, target, i, curSum, temp);
    curSum-=candidates[i];
    temp.pop_back();
    helper(candidates, target, i+1, curSum, temp);
}

void print(){
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<int> temp;
    helper(candidates, target, 0, 0 , temp);
    print();
}