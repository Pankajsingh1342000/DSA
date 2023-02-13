#include<iostream>
#include<vector>
using namespace std;

vector<int> printLikeAWave(vector<vector<int>> arr, int row, int col){
    vector<int> ans;
    for(int i=0; i<col; i++){

        if(i %2 != 0){
            for(int j = row-1; j>=0; j--){
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=0; j<row; j++){
                ans.push_back(arr[j][i]);
            }
            
        }
        
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        };

        vector<int> ans = printLikeAWave(arr, 3, 4);

        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}