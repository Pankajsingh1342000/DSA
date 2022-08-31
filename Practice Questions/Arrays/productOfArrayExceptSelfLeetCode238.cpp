#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){

    vector<int> ans;
    int product = 1;

    if(nums.size() < 1){
        return ans;
    }

    for(int i=0; i<nums.size(); i++){
        product *= nums[i];
        ans.push_back(product);
    }
    product = 1;
    for(int i=nums.size()-1; i>0; i--){

        ans[i] = ans[i-1] * product;
        product *= nums[i];
    }
    ans[0] = product;

    return ans;

}

int main(){
    vector<int> nums = {1,2,3,4};

    vector<int> ans = productExceptSelf(nums);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}