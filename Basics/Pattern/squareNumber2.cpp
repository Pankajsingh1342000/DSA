#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<col;
            col++;
        }
        row++;
        cout<<endl;
    }
}
// 123456
// 123456
// 123456
// 123456
// 123456
// 123456