#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Decimal_to_Octal(int n){
    string octal;
     while(n>0){
        octal.push_back(n%8+'0');
        n/=8;
    }
    int size = octal.length();
    reverse(octal.begin(),octal.end());
    return octal;
}

int main(){
    int n;
    cin>>n;

    cout<<Decimal_to_Octal(n);

    return 0;
}