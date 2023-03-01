#include<iostream>
using namespace std;
int main(){
    int * arr = new int [4];

    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<4; i++){
        cout<<arr[i];
    }

    delete [] arr;
}