#include<iostream>
using namespace std;
void swapAlternate(int arr[], int size){
    int i=0;
    int *tempArray = arr;
    while(i<size-1){
        int temp = tempArray[i];
        tempArray[i] = tempArray[i+1];
        tempArray[i+1] = temp;
        i+=2;
    }

    for(int j = 0; j<size; j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
}