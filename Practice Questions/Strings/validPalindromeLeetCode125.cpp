#include<iostream>
using namespace std;
#include<string>

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        char temp = ch - 'A' + 'a';
        return temp;
    }
    else{
        return ch;
    }
}

bool isValid(char ch){
    if(ch >='A' && ch <= 'Z' || ch >='a' && ch <= 'z' || ch >='0' && ch <= '9'){
        return true;
    }
    else{
        return false;
    }
}

bool validPalindrome(string s){
    int start = 0;
    int end = s.length()-1;
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
    string s = "A man, a plan, a canal: Panama";

    if(validPalindrome(s)){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
}