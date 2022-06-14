#include<iostream>
using namespace std;

int palindrome(string s, int start, int end){
    if(start>=end){
        return 1;
    }
    if(s[start] != s[end]){
        return 0;
    }
    return palindrome(s,start+1,end-1);
}

int main(){
    string S;
    cin>>S;
    int n=S.size()-1;
    int ans = palindrome(S,0,n);
    if(ans==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}