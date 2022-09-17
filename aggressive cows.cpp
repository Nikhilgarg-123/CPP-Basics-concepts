#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool aggressivecows(int c,int arr[],int n,int distance){
int count=1;
int pos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=distance){
            pos=arr[i];
            count++;
        }
        if(count==c){
            return true;
        }
    }
    return false;
}
int main() {
        int n, c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);
        int start =0;
        int end=arr[n-1]-arr[0];
        long long answer = -1;
        while(start<=end){
        int mid=start+(end-start)/2;
        
        if(aggressivecows(c,arr,n,mid)){
            answer=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
        }

        cout<<answer;


    
    }
