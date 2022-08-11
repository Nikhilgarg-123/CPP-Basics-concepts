#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        int fac=1;
        fac=n*factorial(n-1);
        return fac;
    }
    return 0;
}

int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x=factorial(6);
    cout<<x;

}
