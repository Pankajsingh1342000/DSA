#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int>&ans){
    int i=0;
    int j=ans.size()-1;
    while(i<=j){
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
}

vector<int> sumOfTwoArrays(vector<int>&a, int n, vector<int>&b, int m){
    int arr1 = 0;
    int arr2 = 0;
    vector<int> ans;
    for(int i=0; i<n; i++){
        arr1 = arr1 * 10 + a[i];
    }
    for(int i=0; i<m; i++){
        arr2 = arr2 * 10 + b[i];
    }

    int sum = arr1 + arr2;

    while(sum){
        int temp = sum % 10;
        sum = sum/10;
        ans.push_back(temp);
    }

    rotate(ans);

    return ans;
}


int main(){

    vector<int> a = {1, 2, 3, 4};
    int n = a.size();

    vector<int> b = {5, 6, 7};
    int m = b.size();

    vector<int> ans = sumOfTwoArrays(a,n,b,m);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
