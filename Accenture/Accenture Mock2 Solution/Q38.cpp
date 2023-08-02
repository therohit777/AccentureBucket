#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max_shopVist(int i,int L){
    return pow(2,L)-i;
}

int main(){
    int i;
    cin>>i;
    int L;
    cin>>L;

    cout<<max_shopVist(i,L);
    return 0;
}