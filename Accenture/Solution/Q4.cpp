#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int Productsmallpair(int sum,int* a,int n){
    if(n<2){
        return -1;
    }

    int mini1 =INT_MAX;
    int mini2 =INT_MAX;
    for(auto i=0;i<n;i++){
        mini1=min(mini1,a[i]);
    }

    for(auto i=0;i<n;i++){
        if(a[i]>mini1){
            mini2=min(mini2,a[i]);
        }
    }

    if(mini2==INT_MAX){
        return 0;
    }

    return (sum>mini1 + mini2)? mini1*mini2 : 0;
}


int main(){
    int Sum;
    cin>>Sum;

    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Productsmallpair(Sum,arr,n);
    return 0;
}
