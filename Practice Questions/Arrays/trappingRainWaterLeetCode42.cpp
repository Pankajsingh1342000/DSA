#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int> &height){
    int size = height.size();
    vector<int> left(size);
    vector<int> right(size);
    int leftit = INT_MIN;
    int rightit = INT_MIN;
    int count = 0;

    for(int i=0; i<size; i++){
        leftit = max(leftit, height[i]);
        left[i] = max(leftit, height[i]);
    }

    for(int i=size-1; i>=0; i--){
        rightit = max(rightit, height[i]);
        right[i] = max(rightit, height[i]);
    }

    for(int i=0; i<size; i++){
        int minimum = min(left[i], right[i]);
        count += (minimum - height[i]);
    }

    return count;
}

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<trap(height);
}