#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxnum(int arr[],int size){
    vector<int> v;
    for(int i=0;i<size;i++){
        int k = arr[i];
        while(k>0){
            v.push_back(k%10);
            k/=10;
        }
    }
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    int maxsum = 0;
    for(int i:v){
        maxsum=maxsum*10+i;
    } 
    return maxsum;

}

int main(){
    int size;
    cin>>size;
    int* arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<maxnum(arr,size);
    return 0;
}