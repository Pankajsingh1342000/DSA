#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool unique(int arr[], int n){
    sort(arr,arr+n);
    int count=1;
    vector<int>tempArr;
    for(int i=0; i<n-1; i++){

        if(arr[i]==arr[i+1]){
            count++;
        }
        else if(arr[i]!=arr[i+1]){
            tempArr.push_back(count);
            count=1;
        }
        if(i+1 == n-1){
            tempArr.push_back(count);
        }
    }

    sort(tempArr.begin(), tempArr.end());
    for(int i=0; i<tempArr.size()-1; i++){
        if(tempArr[i]==tempArr[i+1]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int arr[]={-3,0,1,-3,1,1,1,-3,10,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = unique(arr,n);
    if(ans==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}