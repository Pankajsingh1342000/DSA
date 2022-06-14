#include<iostream>
using namespace std;
/*int main(){
    int number;
    cout<<"Enter Number\n";
    cin>>number;
    int i=1;
    int sum=0;
    while(i<=number){
        sum+=i;
        i++;
    }
    cout<<"sum="<<sum;
}*/

int sum(int number){
    if(number == 1){
        return 1;
    }
    return number + sum(number-1);
}


int main(){
    int number;
    cin>> number;
    cout<<sum(number); 

}
