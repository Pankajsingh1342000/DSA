#include<iostream>
#include<vector>
using namespace std;

int binarySearch2DArray(vector<vector<int>> matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = (row*col)-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        int element = matrix[mid/col][mid%col];

        if(element == target){
            return element;
        }
        if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    return 0;
}
int main(){

    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11}
    };
    int target = 12;

    cout<<binarySearch2DArray(matrix,target);

}