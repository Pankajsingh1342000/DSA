#include<iostream>
#include<vector>
using namespace std;

vector<int> selectionSort(vector<int> arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

int main(){
    vector<int> arr = {4,6,1,3,8,9};
    int n = arr.size();

    vector<int> ans = selectionSort(arr, n);
    
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}