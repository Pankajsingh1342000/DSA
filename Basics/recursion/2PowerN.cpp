#include<iostream>
#include<math.h>
using namespace std;
int powers(int n){
    if(n == 1){
        return 1;
    }
    return 2 * pow(2,n-1);

}
int main(){
    int number;
    cin>>number;
    cout<<powers(number);
}