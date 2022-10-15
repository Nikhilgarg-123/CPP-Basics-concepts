#include <iostream>
using namespace std;
#define ll long long int

bool isValid(ll books[],ll n,ll k,ll ans){
    int students=1;
    ll currentpages=0;
    for(int i=0;i<n;i++){
        if(currentpages+books[i]>ans){
            currentpages= books[i];
            students++;
            if(students>k){
                return false;
            }
        }
        else{
            currentpages+=books[i];
        }
    }
    return true;
}

ll binarysearchbook(ll books[], ll n, ll k){
    ll total_pages=0;
    ll s=0,e=0;
    for(int i=0;i<n;i++){
        total_pages+=books[i];
        s=max(s,books[i]);
    }
     e=total_pages;
ll finalans=0;
    while(s<=e){
        ll mid= (s+e)/2;
        if(isValid(books,n,k,mid)){
            finalans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return finalans;
}

int main() {
    ll n;
    ll m;
    cin>>n>>m;
    ll books[10000];
    for (int i=0;i<n;i++){
        cin>>books[i];
    }
    cout<<binarysearchbook(books,n,m);

}
