#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int countFrequency(int a[],int size){
    int maxe = INT_MIN;
    int mini = INT_MAX;
    map<int,int> m;
    for(int i=0;i<size;i++){
        m[a[i]]++;
    }
    
    for(auto i:m){
        maxe = max(i.second,maxe);
    }

    for(auto i:m){
        if(i.second==maxe && i.first<mini){
            mini=i.first;
        }
    }
    return mini;
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        int size;
        cin>>size;
        int* arr = new int [size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        cout<<countFrequency(arr,size);
        n--;
    }
    return 0;
}