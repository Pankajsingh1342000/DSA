#include<iostream>
#include<string>
using namespace std;

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isValid(char ch){
    if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <='z') || (ch >= '0' && ch <='9')){
        return true;
    }
    else{
        return false;
    }
}

bool checkPalindrome(string s){
    int start=0, end=s.length()-1;
    
    while(start<=end){
        
        if(!isValid(s[start])){
            start++;
        }
        else if(!isValid(s[end])){
            end--;
        }
        else{
            if(toLowerCase(s[start]) != toLowerCase(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
    }
    return true;
}

int main(){
    string s = {"c1 O$d@eeD o1c"};

    if(checkPalindrome(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


}