#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    int ans= 0;
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    while(i<n){
        int bit = arr[i];
        ans = (ans * 10)+bit;
        i++;
    }
    cout<<ans;
}