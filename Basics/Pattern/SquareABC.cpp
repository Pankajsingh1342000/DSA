#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char x='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<x;
            col++;
        }
        x++;
        row++;
        cout<<endl;
    }
}
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE