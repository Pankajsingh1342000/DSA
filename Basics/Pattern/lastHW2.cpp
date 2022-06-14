// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col++;
        }
        int col2=1;
        while(col2<=row-1){
            cout<<"**";
            col2++;
        }
        int col3=1;
        int x=n-row+1;
        while(col3<=n-row+1){
            cout<<x--;
            col3++;
        }
        row++;
        cout<<endl;
    }
}