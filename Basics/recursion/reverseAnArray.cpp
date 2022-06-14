#include<iostream>
using namespace std;

int reverse(int s[], int start, int end){
    int temp;
    if(start<end){
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        return reverse(s, start+1, end-1);
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int number[n];
    for(int i=0; i<n; i++){
        cin>>number[i];
    }
    reverse(number,0,n-1);
    for(int i=0; i<n; i++){
        cout<<number[i];
    }
    return 0;
}