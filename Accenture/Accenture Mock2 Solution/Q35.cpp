#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int pos1(int n){
    string k;
    while(n>0){
        k.push_back(n%2+'0');
        n/=2;
    }
    k.push_back('0');
    int count=0;
    for(auto i:k){
        count++;
        if(i=='1'){
            return count;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<pos1(n);
    return 0;
}