#include<iostream>
using namespace std;
#include<string>

string reverseWord(string s){
    string ans;
    int start = 0;
    int count = 0;
    while(start<=s.length()){
        if(s[start] == ' ' || s[start] == '\0'){
             int tempStart = start-1;
            while(tempStart != count-1){
                ans.push_back(s[tempStart]);
                tempStart--;
            }
            count = start+1;
            ans.push_back(' ');
            start++;
        }
        else{
            start++;
        }
    }
    return ans;
}

int main(){
    string s = "my name is pankaj and i am from punjab";

    string ans = reverseWord(s);

    cout<<ans;
}