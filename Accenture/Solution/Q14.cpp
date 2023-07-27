#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string ChatFrequentcharacter(string s, char x){
    map<int,int> m;
    for(auto i:s){
        m[i]++;
    }

    int Maxe = INT_MIN;
    char replace;
    for(auto i:m){
        if(i.second>Maxe){
            Maxe = i.second;
            replace = i.first;
        }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]==replace){
            s[i]=x;
        }
    }    

    return s;
}

int main(){
    string s;
    char x;
    cout<<"str: ";
    cin>>s;
    cout<<endl;

    cout<<"char x: ";
    cin>>x;
    cout<<ChatFrequentcharacter(s, x);
    return 0;
}