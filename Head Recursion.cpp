#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
       
        fun(n-1);
        cout<<n;       
    }
}
int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x=3;
    fun(x);
}
