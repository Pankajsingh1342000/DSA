#include<iostream>
#include<vector>
using namespace std;

bool checkIfArrayIsSortedAndRotated(vector<int> arr, int n){
    int count = 0;
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[n-1] > arr[0]){
        count++;
    }

    return count<=1;
}

int main(){
    vector<int> arr = {3,4,5,1,2};
    int n = arr.size();

    bool ans = checkIfArrayIsSortedAndRotated(arr, n);

    if(ans == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}