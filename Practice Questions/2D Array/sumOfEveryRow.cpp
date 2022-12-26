#include<iostream>
#include<vector>
using namespace std;

vector<int> sumOfEveryRow(int arr[][3], int row, int col){

    vector<int> ans;

    for(int i=0; i<row; i++){
        int count = 0;
        for(int j=0; j<col; j++){
            count += arr[i][j];
        }
        ans.push_back(count);
    }

    return ans;
}


int main(){
    int arr[3][3] = {{3,5,1},{2,5,8},{1,9,2}};
    int row=3, col=3;

    vector<int> ans;

    ans = sumOfEveryRow(arr, row, col);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}