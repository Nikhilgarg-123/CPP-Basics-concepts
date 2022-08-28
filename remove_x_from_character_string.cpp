#include <iostream>
#include  <bits/stdc++.h>
using namespace std;

void remove_x(char s[]){
  if(s[0]=='\0'){
    return;
  }
  if(s[0]!='x'){
    remove_x(s+1);
  }
  else{
    int i=1;
    for(; s[i]!='\0';i++){
      s[i-1]=s[i];
    }
    s[i-1]=s[i];
    remove_x(s);
  }

}


int main(){
  char str[1000];
 cin.getline(str,100);
remove_x(str);
cout<<str;
}
