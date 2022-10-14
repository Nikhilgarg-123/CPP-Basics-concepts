//Minimum sum of two numbers formed from digits of an array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int min_sum(int arr[],int n){
    sort(arr,arr+n);
    int first_num=0;
    int second_num=0;
    for(int i=0;i<n;i++){
        if(i & 1){
            first_num=first_num*10+arr[i];
        }
        else{
            second_num=second_num*10+arr[i];
        }

    }
    return first_num+second_num;
}






int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int m= sizeof(arr)/sizeof(arr[0]);

    

    int x=min_sum(arr,m);
    cout<<x;

}
