#include<iostream>
using namespace std;
#include<algorithm>

int allDuplicate(int arr[],int n){
    int i=0;
    sort(arr,arr+n);

    int tempArr[100];
    int k=0;

    while(i<n){

        if(arr[i]==arr[i+1]){
            tempArr[k]=arr[i];
            k++;
            i++;
        }
        i++;
    }

    for(int i=0; i<k; i++){
        cout<<tempArr[i]<<" ";
    }

    return 0;
}

int main(){
    int arr[]={4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    allDuplicate(arr,n);
}