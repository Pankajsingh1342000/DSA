
// Interview Bit Question

#include<iostream>
#include<vector>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A){
    vector<int> B(A.size(), 0);
    int a,b;

    for(int i=0; i<A.size(); i++){
        B[A[i]-1]++;
    }
    for(int i=0; i<B.size(); i++){
        if(B[i] == 0){
            b = i+1;
        }
        if(B[i] == 2){
            a = i+1;
        }
    }
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);

    return ans;
}

int main(){
    vector<int> A = {3, 1, 2, 5, 3};

    vector<int> ans = repeatedNumber(A);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}