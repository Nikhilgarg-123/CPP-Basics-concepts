#include <iostream>
using namespace std;

int nestedRecursion(int n){
    // When parameter is passed as a recursive function inside a recursive function
    // a(a(n-1))
    if(n>100){
        return n-10;

    }
    else{
        return nestedRecursion(nestedRecursion(n+11));
    }
}

int main() {
    cout<<"Hello Nikhil!"<<endl;
    int a=nestedRecursion(111);

    cout<<a;
}
