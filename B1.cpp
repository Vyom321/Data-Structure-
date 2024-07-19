#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_Search(vector<int>&A, int target){
    int n = A.size();
    int low = 0, high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if(A[mid]==target)
        return mid;
        else if(target>A[mid])
        low = mid+1;
        else high = mid-1;



    }
    return -1;
}
int main(){
    vector<int>A = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6;
    int ind = binary_Search(A,target);
    if(ind == -1){
        cout<<"The number is   not present"<<endl;
    }
    else {
        cout<<"The target at index:"<<ind<<endl;
    }
}