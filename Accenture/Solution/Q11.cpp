#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int operations(string s){
    stack<int> st;
    char op;
    for(int i=0;i<s.length();i++){
        if(s[i]=='I'){
            st.push(1);
        }
        if(s[i]=='O'){
            st.push(0);
        }
        if(s[i]=='A' || s[i]=='B' || s[i]=='C'){
            op=s[i];
        }
        if(s.size()==2){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int sum=0;
            if(op=='A'){
                sum = a&b;
            }
            else if(op=='B'){
                sum = a|b;
            } 
            else{
                sum = a^b;
            }
            st.push(sum);
        }
    }
   
    return st.top();
}

int main(){
    string str;
    cin>>str;
    cout<<operations(str);
    return 0;
}