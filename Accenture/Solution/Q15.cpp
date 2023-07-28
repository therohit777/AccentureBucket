
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Autocount(string s){
    map<char,int> m;
    set<char> ss;
    for(auto i:s){
        m[i]++;
        ss.insert(i);
    }
    
    for(int i=0;i<s.length();i++){
        if(m[i+'0']!=s[i]-'0'){
            return 0;
        }
    }
    return ss.size();
}

int main(){
    string s;
    cin>>s;
    int count  = Autocount(s);
    if(count){
        cout<< count;
    }
    else{
        cout<<"Not a autobiographical number";
    }
    return 0;
}