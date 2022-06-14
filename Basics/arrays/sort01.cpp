#include<iostream>
using namespace std;

void sort01(int arr[], int n){
    int i=0, k=n-1;
    while(i<k){
        if(arr[i]==0 && i<k){
            i++;
        }
        else if(arr[k]==1 && i<k){
            k--;
        }
        else{
            swap(arr[i],arr[k]);
            i++;
            k--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr [] ={0,0,1,1,0,0,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort01(arr, n);
}