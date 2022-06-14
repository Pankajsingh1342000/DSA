#include<iostream>
using namespace std;

void usingWhile(int array1[],int array2[], int n , int m){
    int i=0,j=0;
    int k=0;
    int temparr[100];
    temparr[0]=-1;

    while(i<n && j<m){
        if(array1[i]<array2[j]){
            i++;
        }
        else if(array1[i]>array2[j]){
            j++;
        }
        else{
            temparr[k]=array1[i];
            k++;
            j++;
            i++;
        }
    }

    if(k==0){
        cout<<temparr[0];
    }
    else{
        for(int l=0; l<k; l++){
            cout<<temparr[l]<<" ";
        }
    }
}



void bruteforce(int array1[],int array2[], int n , int m){
    int k=0;
    int temparr[100];
    temparr[0]=-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array2[j]==array1[i]){
                temparr[k]=array1[i];
                k++;
                i++;
            }
        }
    }
    if(k==0){
        cout<<temparr[0];
    }
    else{
        for(int l=0; l<k; l++){
            cout<<temparr[l]<<" ";
        }
    }

}
int main(){
    int n;
    cin>>n;
    int arr1[100];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[100];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    // bruteforce solution
    bruteforce(arr1,arr2,n,m);
    cout<<endl;
    // optamize solution
    usingWhile(arr1,arr2,n,m);

}