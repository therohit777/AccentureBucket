#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int b[],int n1,int n2){
    vector<int> v(n1+n2,0);
    int k=n1+n2-1;
    int i=n1-1;
    int j=n2-1;
    while(i>=0 && j>=0){
        if(a[i]>=b[j]){
            v[k--]=a[i--];
        }
        else{
            v[k--]=b[j--];
        }
    }
    while(i>=0){
        v[k--]=a[i--];
    }
    while(j>=0){
        v[k--]=b[j--];
    }


    for(int i:v){
        cout<<i<<" ";
    }
}

int main(){
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;

    int* arr1 = new int[n1];
    int* arr2 = new int[n2];

    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    merge(arr1,arr2,n1,n2);
    return 0;
}