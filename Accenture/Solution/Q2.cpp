#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Sum(int n,int m){
   int Sum1=0;
   int Sum2=0;
   for(int i=1;i<=n;i++){
    if(i%m==0){
        Sum1+=i;
    }
    else{
        Sum2+=i;
    }
   }
   return Sum2-Sum1;
}


int main(){
    int m;
    cin>>m;
    
    int n;
    cin>>n;

    cout<<Sum(n,m);
    return 0;
}
// 18 mins 2 Question