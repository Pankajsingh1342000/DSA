#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsDuplicate(vector<int>arr, int n){
    sort(arr.begin(), arr.end());

    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {5,6,2,1,10,6};
    int n = arr.size();

    bool ans = containsDuplicate(arr,n);
    if(ans == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}