//Min in rotated sorted array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find_Min(vector<int>&arr){
    int n = arr.size();
    int mini = INT_MAX;
    for(int i =0 ; i<n;i++){
        mini = min(arr[i],mini);
    }
    return mini;
}
int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = Find_Min(arr);
    cout<<"Find the minimum element:"<<ans <<endl;
    return 0;
}