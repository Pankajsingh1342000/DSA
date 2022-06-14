#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<n-col+1;
            col++;
        }
        row++;
        cout<<endl;
    }
}
// 54321
// 54321
// 54321
// 54321
// 54321