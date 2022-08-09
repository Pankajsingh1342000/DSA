#include<iostream>
#include<string>
using namespace std;

char maximumOccuringCharacter(string s){
    int arr[26] = {0};
    char finalAns;
    for(int i=0; i<s.length(); i++){
        int number = 0;
        if(s[i] >= 'a' && s[i] <= 'z'){
            number = s[i]-'a';
        }
        arr[number]++;
    }

    int maxi = INT_MIN;
    int ans = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > maxi){
            ans = i;
            maxi = arr[i];
        }
    }

    finalAns = ans + 'a';
    return finalAns;
}

int main(){
    string s = {"testcase"};
    char ch = maximumOccuringCharacter(s);
    cout<<ch;
}