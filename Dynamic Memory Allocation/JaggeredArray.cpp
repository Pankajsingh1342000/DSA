#include<iostream>
using namespace std;

int main(){

    int rows, cols;
    cout<<"Enter number of rows ";
    cin>>rows;

    int ** arr = new int *[rows];

    int colarr[rows];

    for(int i=0; i<rows; i++){
        cout<<"enter no of elemets in cols"<<i+1<<" ";
        cin>>cols;
        colarr[i] = cols;

        arr[i] = new int[cols];
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<colarr[i]; j++){

            cin>>arr[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<colarr[i]; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        delete [] arr[i];
    }

    delete [] arr;
    
}