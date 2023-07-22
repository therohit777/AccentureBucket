#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Sum(int a[],int n){
    if(n==0 || n<=3){
        return 0;
    }
    int maxe = INT_MIN;
    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        if(i%2==0){
            maxe=max(maxe,a[i]);
        }
        else{
            mini=min(mini,a[i]);
        }
    }

    int maxe2 = INT_MIN;
    int mini2 = INT_MAX;
    for(int i=0;i<n;i++){
         if(i%2==0){
            if(a[i]<maxe){
              maxe2=max(maxe2,a[i]);
            }
        }
        else{
            if(a[i]>mini){
              mini2=min(mini2,a[i]);
            }
        }
    }

    return mini2 + maxe2;
}


int main(){
    int n;
    cin>>n;

    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<Sum(a,n);
    return 0;
}



// 18 mins 2 Question