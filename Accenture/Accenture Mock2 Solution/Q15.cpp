#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool TwoSum(int arr[],int size,int sum){
    sort(arr,arr+size);
    int i = 0;
    int j = size-1;
    while(i<=j){
        int pairsum = arr[i] + arr[j];
        if(pairsum == sum){
            return true;
        }
        else if(pairsum>sum){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}

int main(){
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<TwoSum(arr,n,sum);
    return 0;
}