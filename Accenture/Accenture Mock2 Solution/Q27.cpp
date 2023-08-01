#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Fib(int n){
    if(n==0){
        return 0;
    }
    int a=0;
    int b=1;
    for(int i=2;i<=n;i++){
        int d = a+b;
        a=b;
        b=d;
    }
    return b;
}


int main(){
    int n;
    cin>>n;
    vector<int> v;
    cout<<Fib(n);
    return 0;
}