#include<iostream>
using namespace std;
#include<algorithm>

void minmax(int arr[], int n){
    int min = arr[0], max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"min = "<<min<<endl<<"max = "<<max;
}

int main(){
    int arr[] = {3,6,1,7,4,9,0,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    minmax(arr,n);

}