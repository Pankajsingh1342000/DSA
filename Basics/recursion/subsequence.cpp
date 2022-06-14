#include<iostream>
using namespace std;
int subsequence(string s, string tempAns,int index){
    if(s.size()==index){
        cout<<tempAns<<" ";
        return 1;
    }
    subsequence(s, tempAns+s[index],index+1);
    subsequence(s,tempAns,index+1);
    return 0;
}
int main(){
    string s;
    cin>>s;
    subsequence(s,"",0);
}