#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void FindFirstLast(int arr[],int n,int x){
    int first = 0;
    int last = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==0){
                first=i;
            }
            last=i;
        }
    }
    cout<<"First Ocurrence = "<<first<<endl;
    cout<<"Last Ocurrence = "<<last<<endl;
}


int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    sort(arr,arr+n);

    FindFirstLast(arr,n,x);
    return 0;
}