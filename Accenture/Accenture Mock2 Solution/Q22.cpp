#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Decimal_to_binary(int n){
    string s;
    while(n>0){
        s.push_back(n%2+'0');
        n/=2;
    }
    int size = s.length();
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    int n;
    cin>>n;

    cout<<Decimal_to_binary(n);
    return 0;
}