#include<iostream>
using namespace std;
#include<algorithm>

int diffrence(int arr[], int m,int n){
    int diff = INT_MAX;
    sort(arr,arr+n);

    for(int i=0; i+m-1 < n; i++){

        int min_diff = arr[i+m-1] - arr[i];
        
        if(min_diff < diff){
            diff = min_diff;
        }

    }
    return diff;
}

int main(){
    int arr[] = {12,4,7,9,2,23,25,41,30,40,28,42,30,44,48,43,50};
    int m = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<diffrence(arr,m,n);
}