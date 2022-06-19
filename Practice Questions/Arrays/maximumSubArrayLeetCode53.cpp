#include<iostream>
using namespace std;
#include<vector>
void maximumSubArray(vector<int> arr){
    int i = 0, sum = 0, maxi=INT_MIN;
    while(i<=arr.size()-1){
        sum += arr[i];
        maxi = max(sum, maxi);
        if(sum < 0){
            sum = 0;
        }
        i++;
    }

    cout<< maxi;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    maximumSubArray(arr);
}