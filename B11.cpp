#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FuncN(int mid , int n , int m){
    long long ans = 1;
    for(int i = 0;i<n;i++){
        ans = ans*mid;
        if(ans>m){
            return 2;
        }if(ans == m){\
        return 1;
        return 0;
        }
    }
}

int NthInteger(int n , int m){
    int low = 1 ,high = m;
    while(low<=high){
        int mid = (low+high)/2;
        int midN = FuncN(mid , n , m);
        if(midN == 1){
            return mid;
        }else if (midN == 0){
            low = mid+1;
        }else{
            high = mid-1;

        }


    }
    return -1;
}
int main(){
    int n = 3, m = 27;
    int  ans = NthInteger(n,m);
    cout<<"Here is yout answer"<<ans<<endl;
    return 0;

}