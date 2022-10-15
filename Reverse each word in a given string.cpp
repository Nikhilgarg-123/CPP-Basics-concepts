#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse_word(string str){
    stack<char> st;
    for (int i=0;i<str.length();i++){
        if(str[i]!=' '){
            st.push(str[i]);
        }
        else{
            while(st.empty()==false){
                cout<<st.top();
                 st.pop();
            }
               cout<<" ";

        }
    }

        while(st.empty()==false){
                cout<<st.top();
                 st.pop();
            }
     
    }

   

int main() {
    string a= "Hello Nikhil,You Are doing each word reverse using stack";
    reverse_word(a);
}
