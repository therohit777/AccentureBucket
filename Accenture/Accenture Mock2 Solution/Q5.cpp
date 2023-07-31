#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void primes(int n){
    vector<int>v(n+1,0);
    for(int i=2;i<=n;i++){
        if(v[i]==0){
            cout<<i<<" ";
            int j=2;
            while(i*j<=n){
                v[i*j]=1;
                j++;
            }
        }
    }
}


int main(){
  int n;
  cin>>n;
  primes(n);
  return 0;  
}