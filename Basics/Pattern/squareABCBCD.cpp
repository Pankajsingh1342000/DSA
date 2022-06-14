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
            char ch = x+col+row-2;
            cout<<ch;
            col++;
        }
        row++;
        cout<<endl;
    }
}
// ABC
// BCD
// CDE