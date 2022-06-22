#include<iostream>
using namespace std;
#include<vector>

int pivot(vector<int>arr){
    int sum=0, pre = 0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }
    for(int i=0; i<arr.size(); i++){
        if(sum - pre - arr[i] == pre){
            return i;
        }
        pre+=arr[i];
    }
    return -1;
}

int main(){
    vector<int>arr = {1,7,3,6,5,6};
    cout<<pivot(arr);
}