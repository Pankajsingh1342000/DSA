#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &arr, int n){
    int index = -1;
    for(int i=n-1; i>0; i--){
        if(arr[i] > arr[i-1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(), arr.end());
    }
    else{
        int previous = index;
        for(int i=index+1; i<n; i++){
            if(arr[i] > arr[index-1] && arr[i] <= arr[previous]){
                previous = i;
            }
        }
        swap(arr[index-1], arr[previous]);
        reverse(arr.begin()+index, arr.end());
    }

}

int main(){
    vector<int> arr = {1,5,8,4,7,6,5,3,1};
    int n = arr.size();

    nextPermutation(arr, n);

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}