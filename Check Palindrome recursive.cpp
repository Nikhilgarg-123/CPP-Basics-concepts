#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int i=0;
 string check_palindrome(string n,int len){
     if(i<=len-i){
          if(n[i]==n[len-1]){
        return "true";
    }
    i++;
     check_palindrome(n,len);
     }    return "false";
}


int main() {
    string n;
    cin>>n;
    int len=n.length();
     cout<<check_palindrome(n,len);
}
