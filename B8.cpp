#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find_Peak(vector<int>& vec){
    int n = vec.size();
    int low = 0 ,high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if(vec[mid-1]<vec[mid] && vec[mid]>vec[mid+1]){
            return mid;

        }
        if(vec[mid]>vec[mid-1]){
            low = mid+1;
        }else{
            high = mid-1;
        }

    }
    return low;
    
}
int main(){
    vector<int>vec = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = Find_Peak(vec);
    cout<<"Here is your peak element:"<<ans<<endl;
    return 0;
}