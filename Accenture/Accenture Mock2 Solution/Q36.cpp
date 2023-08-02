#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int diff_bits(int a,int b){
    string s1;
    string s2;

    while(a>0){
        s1.push_back(a%2+'0');
        a/=2;
    }
    s1.push_back('0');

    while(b>0){
        s2.push_back(b%2+'0');
        b/=2;
    }
    s2.push_back('0');


    int count=0;
    for(int i=0;i<s1.length();i++){
        count++;
        if(s1[i]!=s2[i]){
            return count;
        }
    }
    return count;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<diff_bits(a,b);
    return 0;
}