#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Replacecharacter(string s,char c1,char c2){
    for(int i=0;i<s.length();i++){
        if(s[i]==c1){
            s[i]=c2;
        }
        else if(s[i]==c2){
            s[i]=c1;
        }
    }
    return s;
}


int main(){
    string word;
    cin>>word;

    char c1;
    char c2;

    cin>>c1;
    cin>>c2;
  
    cout<<Replacecharacter(word,c1,c2);
    return 0;
}