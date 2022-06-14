//     1
//    121
//   12321
//  1234321
// 123454321
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int col=1;
        int col2=1;
        int col3=1;
        while(col<=n-row){
            cout<<" ";
            col++;
        }
        while(col2<=row){
            cout<<col2;
            col2++;
        }
        int row2 = row-1;
        while(col3<=row-1){
            cout<<row2--;
            col3++;
        }
        row++;
        cout<<endl;
    }
}