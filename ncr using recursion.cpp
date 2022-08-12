#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int ncr(int n,int r){
    int num= fact(n);
    int den= fact(r) * fact(n-r);
    return num/den;
}

int main() {
 
    cout<<"Hello Nikhil!"<<endl;
    int x=ncr(5,2);
    cout<<x;


}
