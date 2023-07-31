#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int primes(int start,int end){
    vector<int>v(end+1,0);
    v[1]=1;
    v[0]=1;
    int sum=0;
    for(int i=start;i<=end;i++){
        if(v[i]==0){
            sum+=i;
            int j=2;
            while(i*j<=end){
                v[i*j]=1;
                j++;
            }
        }
    }
    return sum;
}


int main(){
  int start;
  int end;
  cin>>start;
  cin>>end;
  cout<<primes(start,end);
  return 0;  
}