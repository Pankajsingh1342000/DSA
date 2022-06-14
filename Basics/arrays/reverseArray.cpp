#include<iostream>
using namespace std;

int* reverse(int array[], int size){

    int *tempArr = array, j=0, k=size-1;

    while(j<k){
        int temp=tempArr[j];
        tempArr[j]=tempArr[k];
        tempArr[k]=temp;
        j++;
        k--;
    }
    return tempArr;

}

int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
    int *array = reverse(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}