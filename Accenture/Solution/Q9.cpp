#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Calculate(int m,int n){
    int sum=0;
    for(int i=m+1;i<n;i++){
        if(i%3==0 && i%5==0){
            sum+=i;
        }
    }
    return sum;
}


int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    cout<<Calculate(m,n);
    return 0;
}