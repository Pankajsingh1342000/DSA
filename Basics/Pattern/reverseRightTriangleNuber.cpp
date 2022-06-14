// 1
// 21
// 321
// 4321
// 54321
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int k=row;
        while(col<=row){
            cout<<k;
            k--;
            col++;
        }
        row++;
        cout<<endl;
    }
}