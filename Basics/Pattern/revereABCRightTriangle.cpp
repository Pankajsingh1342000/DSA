// D
// CD
// BCD
// ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char x='A'+n-1;
    while(row<=n){
        int col=1;
        char ch = x;
        while(col<=row){
            cout<<ch++;
            col++;
        }
        x--;
        row++;
        cout<<endl;
    }
}