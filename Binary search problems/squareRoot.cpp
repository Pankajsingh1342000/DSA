#include<iostream>
using namespace std;

long long int squareRoot(int n){
    int left = 2, right = n/2;
    long long int mid = left + (right - left)/2;
    int ans = -1;
    while(left <= right){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if( square > n){
            right = mid-1;
        }
        else{
            ans = mid;
            left = mid+1;
        }
        mid = left + (right - left)/2;
    }
    return ans;
}

double morePrecision(double n, int precision, int intSquare){
    double factor = 1;
    double ans = intSquare;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int intSquare = squareRoot(n);
    cout<<morePrecision(n, 3, intSquare);
}