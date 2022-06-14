#include<iostream>
using namespace std;
int main(){
    int amount,hundred,fifty,twenty,one;
    cin>>amount;

    switch(100){
        case 100:{
            hundred = amount/100;
            amount = amount%100;
            }
        case 50:{
            fifty = amount/50;
            amount = amount%50;
            }
        case 20:{
            twenty = amount/20;
            amount = amount%20;
            }
        default:{
            one = amount;
        }
            
    }

    cout<<"Hundred = "<< hundred<<endl;
    cout<<"Fifty = "<<fifty<<endl;
    cout<<"Twenty = "<<twenty<<endl;
    cout<<"One = "<<one;
}