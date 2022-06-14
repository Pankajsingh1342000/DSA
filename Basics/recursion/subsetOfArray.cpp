#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<vector<int>>ans;
void subset(vector<int>arr,vector<int>temp, int n){
    if(n==arr.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[n]);
    subset(arr,temp,n+1);
    temp.pop_back();
    subset(arr,temp,n+1);

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
    vector<int>arr={3,2,4};
    vector<int>temp;
    subset(arr,temp,0);
    print();
}