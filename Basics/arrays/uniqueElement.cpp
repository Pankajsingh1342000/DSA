#include<iostream>
#include<algorithm>
using namespace std;
int unique(int arr[], int size){
    int i=0;
    while(i<size){
        if(arr[i]==arr[i+1]){
            i+=2;
        }
        else{
            return arr[i];
        }
    }
    return 0;
}

// using XOR(^)

int alternateSolution(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    // cout<<unique(arr,n);
    cout<<alternateSolution(arr,n);
}