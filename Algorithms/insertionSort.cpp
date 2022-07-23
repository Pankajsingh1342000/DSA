#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    int i=1;
    while(i<n){
        int temp = arr[i];
        int j= i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        i++;
        arr[j+1] = temp;
    }
}
int main(){
    vector<int> arr = {10, 1, 7, 4, 8, 2, 11};
    int n = arr.size();

    insertionSort(arr, n);

    for(int i = 0; i< n; i++){
        cout<< arr[i]<<" ";
    }
}