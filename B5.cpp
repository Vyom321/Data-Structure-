//Search Element in Rotated Sorted Array II
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    bool new_search (vector<int>&arr , int target){
        int n = arr.size();
        int low = 0 ,  high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]==target){
                return true;

            }
            if(arr[low]==arr[mid] && arr[mid]==arr[high]){
                high = high-1;
                low=low+1;
                continue;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<=target && target <=arr[mid] ){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(arr[mid]<=target && target <= arr[high]){
                    low=mid+1;
                }else{
                    high = mid-1;
                }
            }

        }
        return false;
    }

int main(){
    vector<int>arr={7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;
    bool ans = new_search(arr,target);
    if(!ans){
        cout<<"Target is not found";
    }else{
        cout<<"Target is present in the array:"<<endl;
    }
    return 0;
}