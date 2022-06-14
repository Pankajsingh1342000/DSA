#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    cin>>n;
    int x = n*-1;
    int ans=0, j=0;
    int i=0, ans1;

    while(x !=0){
        int bit = x&1;
        bit = bit^1;
        ans = (bit * pow(10,i)) + ans;
        x = x>>1;
        i++;
    }
    cout<<ans+1;
}