#include <iostream>
using namespace std;

int fun(int n){
    if(n>0){
        return (fun(n-1)+n);

    }
    return 0;
}
int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x=5;
    cout<<fun(x);
}
