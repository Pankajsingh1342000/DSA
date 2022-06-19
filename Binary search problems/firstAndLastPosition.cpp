#include<iostream>
using namespace std;
#include<vector>

// BRUTE FORCE METHOD

int bruteForcefirstOccurance(vector<int> arr, int n, int target){
    int left=0, right = n-1;
    int mid = left + ((right - left)/2);
    while(left<=right){
        if(target == arr[mid]){
            if(target == arr[mid-1]){
                right = mid-1;
            }
            else if(target == arr[mid] && target != arr[mid-1]){
                return mid;
            }
            else if(target == arr[mid] && left == right){
                return mid;
            }
        }
        else if(target < arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }

        mid = left + ((right - left)/2);
    }
    return -1;
}

int bruteForcelastOccurance(vector<int> arr, int n, int target){
    int left=0, right = n-1;
    int mid = left + ((right - left)/2);
    while(left<=right){
        if(target == arr[mid]){
            if(target == arr[mid+1]){
                left = mid+1;
            }
            else if(target == arr[mid] && target!=arr[mid+1]){
                return mid;
            }
            else if(target == arr[mid] && left == right){
                return mid;
            }
        }
        else if(target < arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        mid = left + ((right - left)/2);
    }
    return -1;
}

// OPTIMIZE METHOD

int optimizefirstOccurance(vector<int> arr, int n, int target){
    int left=0, right = n-1;
    int mid = left + ((right - left)/2);
    int first = -1;
    while(left<=right){
        if(target == arr[mid]){
            first = mid;
            right = mid-1;
        }
        else if(target < arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }

        mid = left + ((right - left)/2);
    }
    return first;
}

int optimizelastOccurance(vector<int> arr, int n, int target){
    int left=0, right = n-1;
    int mid = left + ((right - left)/2);
    int last = -1;
    while(left<=right){
        if(target == arr[mid]){
            last = mid;
            left = mid+1;
        }
        else if(target < arr[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
        mid = left + ((right - left)/2);
    }
    return last;
}

int main(){
    vector<int> arr = {0,0,0,0};
    int n = arr.size();
    int target = 0;

    int first = bruteForcefirstOccurance(arr,n,target);
    int last = bruteForcelastOccurance(arr,n,target);

    // int optimizefirst = optimizefirstOccurance(arr,n,target);
    // int optimizelast = optimizelastOccurance(arr,n,target);

    cout<<"first = "<<first<<endl;
    cout<<"last = "<<last<<endl;

    // cout<<"optimizefirst = "<<optimizefirst<<endl;
    // cout<<"optimizelast = "<<optimizelast;
}