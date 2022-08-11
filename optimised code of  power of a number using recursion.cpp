#include <iostream>
using namespace std;

int power(int no,int pow){
    if(pow==0){
        return 1;
    }
    if(pow%2==0){
        return power(no*no,pow/2);
    }
    else{
        return no*power(no*no,(pow-1)/2);
    }
return 0;
}

int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x=power(10,3);
    cout<<x;
}
