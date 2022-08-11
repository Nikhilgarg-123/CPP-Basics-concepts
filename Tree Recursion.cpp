#include <iostream>
using namespace std;

void treeRecursion(int n){
    // where function call is more than one time 
    if(n>0){
    cout<<n<<" ";
    treeRecursion(n-1);
    treeRecursion(n-1);
    }
}

int main() {
    cout<<"Hello Nikhil!"<<endl;
    treeRecursion(3);

}
