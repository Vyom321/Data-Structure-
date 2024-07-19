#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool CanwePlace(vector<int>&vec,int dist,int cow){
    int n = vec.size();
    int cntcows = 1;
    int last = vec[0];
    for(int i = 1;i<n;i++){
        if(vec[i]-last>=dist){
            cntcows++;
            last = vec[i];
        }
        if(cntcows>=cow){
            return true;
        }
        
    }
    return false;

}
int aggressivecow(vector<int>&vec,int k){
    int n = vec.size();
    sort(vec.begin(),vec.end());
    int low =1 ,high = vec[n-1]-vec[0];
    while (low <= high) {
        int mid = (low + high) / 2;
        if (CanwePlace(vec, mid, k) == true) {
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return high;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans =aggressivecow(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}

