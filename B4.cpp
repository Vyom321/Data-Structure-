//floor and ceil
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int floor_search(int arr[], int n, int x){
    int low = 0,high = n-1;
    int ans = -1;
    while(low<= high){
        int mid = low+(high-low)/2;
        if(arr[mid]<x){
            ans = arr[mid];
            low  = mid+1;
        }else{
            high= mid -1;
        }

    }
    return ans;
}
int ceil_search(int arr[],int n, int x){
    int low = 0 , high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=x){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
pair<int , int > getfloorceil(int arr[],int n,int x ){
    int f = floor_search(arr,n,x);

    int c = ceil_search(arr,n,x);
    return make_pair(f,c);
}
int main(){
    int arr [] = {3,4,4,7,8,9};
    int n = 6;
    int x = 5;
    pair<int,int> ans = getfloorceil(arr,n,x);
    cout<<"The floor and ceil :"<<ans.first<<" "<<ans.second<<endl;
    return 0;
}