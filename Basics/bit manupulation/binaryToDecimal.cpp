#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    cin>>n;
    int k, i=0;
    int ans=0;
    // while(n){
    //     k=n%10;
    //     ans = k*pow(2,i) + ans;
    //     n = n/10;
    //     i++;
    // }
    // cout<<ans;
    while(n!=0){
        int bit= n&1;
        ans = bit*pow(2,i) + ans;
        n = n/10;
        i++;
    }
    cout<<ans;
}