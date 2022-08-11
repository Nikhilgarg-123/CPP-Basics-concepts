#include <iostream>
using namespace std;

int sum(int n){
    if (n>0){
        int sonn=n;
        sonn=sonn+sum(n-1);
        return sonn;
    }
    return 0;
}

int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x;
    cin>>x;
    int a=sum(x);
    cout<<"sum of "<<x<<" natural numbers = "<< a;
}
