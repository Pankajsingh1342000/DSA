#include<iostream>
#include<string>
using namespace std;

void removeSubString(string &s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
}

int main(){
    string s = "daabcbaabcbc";

    string part = "abc";

    removeSubString(s, part);

    cout<<s;
}