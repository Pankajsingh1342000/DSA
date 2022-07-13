#include<iostream>
#include<vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {10, 1, 9, 7, 14, 6};
    int n = arr.size();

    vector<int> ans = bubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}