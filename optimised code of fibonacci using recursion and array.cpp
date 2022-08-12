#include <iostream>
using namespace std;

int f[10000];
int fib(int n){
    if (n<=1){
        f[n]=n;
        return n;
    }
    else{
        if (f[n-2]==-1){
            f[n-2]=fib(n-2);

        }
        if (f[n-1]==-1){
            f[n-1]=fib(n-1);
        }
        f[n]=f[n-1]+f[n-2];
        return f[n-1]+f[n-2];
    }
}

int main() {
    for (int i=0;i<10000;i++){
        f[i]=-1;
    }
    cout<<"Hello Nikhil!"<<endl;
    int x=fib(8);
    cout<<x;

}
