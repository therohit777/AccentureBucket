#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int second_largest(int a,int b,int c){
    vector<int>v;
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(),v.end());
    
    return v[1];
}

int main(){
    int a;
    int b;
    int c;

    cin>>a;
    cin>>b;
    cin>>c;

    cout<<second_largest(a,b,c);
    return 0;
}