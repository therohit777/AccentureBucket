#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int b[],int n1,int n2){
    int sum = n1+n2;
    vector<int> v(sum,0);
    
    int i=n1-1;
    int j=n2-1;
    int k = v.size()-1;
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
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;
    int* arr2 = new int[d];
    
    for(int i=0;i<d;i++){
        cin>>arr2[i];
    }

    merge(arr,arr2,n,d);
    
    return 0;
}