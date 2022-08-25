#include <iostream>
using namespace std;

bool find_number(int arr[],int size,int x){
  if(arr[0]==x){
    return true;
  }
  if (size==0){
    return 0;
  }
  else{
    return find_number(arr+1 ,size-1,x);
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  int number;
  cout<<"Finding  number:";
  cin>>number;
cout<<find_number(arr,n,number);
}
