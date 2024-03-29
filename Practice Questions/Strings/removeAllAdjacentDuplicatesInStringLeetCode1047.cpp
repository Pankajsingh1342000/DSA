#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

string removeAllAdjacentDuplicatesInString(string s){

    string ans;
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }
        else{
            if(st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string s = "abbaca";

    cout<<removeAllAdjacentDuplicatesInString(s);
}