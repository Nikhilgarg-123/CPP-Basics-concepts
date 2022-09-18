#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strtoint(char arr[],int n){
    if(n==0){
        return 0;
    }
    int digit=arr[n-1] -'0';
    return strtoint(arr,n-1)*10+digit;
}

int main() {
    char a[]="2342341";
    int n=strlen(a);

    int num=strtoint(a,n);
    cout<<num;
}
