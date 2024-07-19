#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find_weight(vector<int>&vec,int cap){
    int days = 1;
    int load = 0;
    int n = vec.size();
    for(int i =0;i<n;i++){
        if(load +vec[i]>cap){
            days = days+1;
            load = vec[i];
        }else{
            load = load+vec[i];
        }
    }
    return days;
}
int least_weight(vector<int>&vec,int def){
    int low = *max_element(vec.begin(),vec.end());
    int high = accumulate(vec.begin(),vec.end(),0);
    while (low<=high)
    {
        int mid = (low+high)/2;
        int NumberofDays = Find_weight(vec,mid);
        if(NumberofDays<=def){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
    
}
int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = least_weight(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}