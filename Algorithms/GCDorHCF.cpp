#include<iostream>
using namespace std;

int GCDorHCF(int a, int b){

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        if(b>a){
            b = b-a;
        }
    }
    return a;
}

int main(){

    cout<<GCDorHCF(72,24);

}