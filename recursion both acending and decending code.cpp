#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
        // cout<<n;    //head 
        fun(n-1);
        cout<<n;        // tail

    }
}
int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x=3;
    fun(x);
}
