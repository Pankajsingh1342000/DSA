#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<int> cook, int n, int dishes, int mid){
    int timeCount = 0;
    int parataCount = 0;
    for(int i=0; i<n; i++){
        int prata = 1;
        for(int j = cook[i]*prata; j<mid; j+=cook[i]*prata){
            parataCount++;
            prata++;
        }
        prata=0;
    }

    if(parataCount >= dishes){
        return true;
    }
    else{
        return false;
    }
}

int minTime(vector<int> cook, int n, int dishes){
    int start = 0, end = ((cook[n-1]) * dishes) ;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(isPossible(cook, n, dishes, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    if(n==1){
        return cook[0]*dishes;
    }else{
        return ans;
    }
}

int main(){
    int dishes = 22;
    vector<int> cook = {7, 3, 8, 8, 10, 8, 8};
    int n = cook.size();
    sort(cook.begin(), cook.end());
    int ans = minTime(cook, n, dishes);
    cout<<ans-1;
}