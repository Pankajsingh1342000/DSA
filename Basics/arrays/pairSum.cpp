#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<vector<int>>bruteforce(vector<int>arr,int s){
    vector<vector<int>>ans;
    for(int i=0; i<arr.size();i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    int s = 5;
    vector<int> input = {1,2,3,4,5};
    vector<vector<int>> answer = bruteforce(input,s);
    for(int i=0; i<answer.size(); i++){
        for(int j=0; j<answer.size(); j++){
            cout<<answer[i][j];
        }
        cout<<endl;
    }
}