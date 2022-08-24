#include <iostream>
using namespace std;

bool is_sorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return is_sorted(arr+1,n-1);
}


int main() {
    cout<<"Hello Nikhil!"<<endl;
    int arr[]={1,2,3,4,5,6,7,8,7,9};
    cout<<is_sorted(arr,10)<<endl;
    int arr2[]={1,2,3,4,5,6,7,8,9};
    cout<<is_sorted(arr2,9);
}
