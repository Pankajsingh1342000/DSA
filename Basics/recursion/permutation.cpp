#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>>ans;
void permutation(vector<int>arr, int n){

    if(n==arr.size()){
        ans.push_back(arr);
    }

    for(int j=n; j<arr.size(); j++){
        swap(arr[n],arr[j]);
        permutation(arr, n+1);
        swap(arr[n],arr[j]);
    }

}

void print(){
    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int>arr={2,3,4};
    permutation(arr,0);
    print();
}