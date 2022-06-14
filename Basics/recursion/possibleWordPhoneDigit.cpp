#include<iostream>
using namespace std;
#include<vector>
#include<string>

class solution{
    public:

    vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;

    void helper(int a[], int n, string temp, int i){
        if(i==n){
            ans.push_back(temp);
        }
        for(int j=0; j<keys[a[i]].size(); j++){
            helper(a,n,temp+keys[a[i]][j],i+1);
        }
    }

    vector<string> possibleWords(int a[], int N)
    {
        helper(a,N,"",0);
        return ans;
    }
};

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0; i<N; i++){
        cin>>a[i];
    }
    solution obj;

    vector<string> res = obj.possibleWords(a,N);
    for(string i : res)cout<< i <<" ";
    cout<<endl;
    return 0;
}