#include <iostream>
using namespace std;

int power(int no,int pow){
    if(pow==0){
        return 1;
    }
    else{
        return power(no,pow-1)*no;
    }

}

int main() {
    cout<<"Hello Nikhil!"<<endl;
    int x=power(10,3);
    cout<<x;
}
