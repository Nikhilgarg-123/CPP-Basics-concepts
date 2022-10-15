#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float square_root(int x,int p){
    int start=0;
    int end=x;
    float mid;
    float answer;
 
    while(start<=end){
           mid=(start+end)/2;
        if (mid * mid==x){
            answer= mid;
            break;
        }
        if(mid * mid<x){
            start=mid+1;
            answer= mid;
        }
        else{
            end=mid-1;
        }
    }

    float inc=0.1;
    for (int i=0;i<p;i++){
        while(answer*answer<=x){
            answer+=inc;
        }
        answer=answer-inc;
        inc=inc/10;
    }

    return answer;

}
int main() {
    cout<<square_root(2,2);
}
