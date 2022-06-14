#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col =1, col2=1;
        while(col<= row-1){
            cout<<" ";
            col++;
        }
        while(col2<=n-row+1){
            cout<<"*";
            col2++;
        }
        row++;
        cout<<endl;
    }
}
// *****
//  ****
//   ***
//    **
//     *