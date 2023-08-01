#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string Decimal_to_Hexadecimal(int n){
    string hexadecimal;
     while(n>0){
        if(n%16>9){
            hexadecimal.push_back((n%16)%10+'A');
        }
        else{
            hexadecimal.push_back(n%16+'0');
        }
        n/=16;
    }
    int size = hexadecimal.length();
    reverse(hexadecimal.begin(),hexadecimal.end());
    return hexadecimal;
}

int main(){
    int n;
    cin>>n;

    cout<<Decimal_to_Hexadecimal(n);

    return 0;
}