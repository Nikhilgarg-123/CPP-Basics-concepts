// Replace Character Recursively
// Send Feedback
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of String S <= 10^6
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void replace_character(char s[],char z,char y){
if(s[0]=='\0'){
  return;
}

  if(s[0]==z){
    s[0]=y;
              replace_character(s+1,z,y);
  }
  else{
          replace_character(s+1,z,y);
  }
}

int main(){
  char str[1000];
  cin.getline(str,1000);
  replace_character(str,'a','x');
  cout<<str;
}
