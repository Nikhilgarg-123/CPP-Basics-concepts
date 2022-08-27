#include <iostream>
#include  <bits/stdc++.h>

using namespace std;

int length(char s[]){
  if(s[0]=='\0'){
    return 0;
  }
  return 1+ length(s+1);
}

int main(){
  char str[1000];
 cin.getline(str,100);
cout<<length(str);

}
