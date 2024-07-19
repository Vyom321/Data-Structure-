#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int smallestDivisor(vector<int>&vec,int pre){
    int n = vec.size();
    int sum = 0;
    for(int i =0;i<n;i++){
        sum +=ceil((double)(vec[i])/(double)(pre));
    }
    return sum;
}
int SumofD(vector<int>&nums,int limit){
    int n = nums.size();
    if(n>limit){
        return -1;
    }
    int low = 1,high = *max_element(nums.begin(),nums.end());
    while(low<=high){
        int mid = (low+high)/2;
        if(smallestDivisor(nums,mid)<=limit){
            high = mid-1;

        }else{
            low = mid+1;
        }
    }
    return low;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(nums, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}