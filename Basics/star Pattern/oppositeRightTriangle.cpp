#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int col2=1;
        while(col<=n-row){
            cout<<" ";
            col++;
        }
        while(col2<=row){
            cout<<"*";
            col2++;
        }
        row++;
        cout<<endl;
    }
}
//     *
//    **
//   ***
//  ****
// *****