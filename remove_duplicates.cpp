#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(char s[]){
if(s[1]=='\0'){
  return;
}
if (s[0]!=s[1]){
    remove_duplicate(s+1);
}
else{
    int i=1;
    for(;s[i]!='\0';i++){
        s[i-1]=s[i];

    }
    s[i-1]=s[i];
        remove_duplicate(s);
}
}

int main(){
  char str[1000];
  cin.getline(str,1000);
  remove_duplicate(str);
  cout<<str;
}
