#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Kthlargest(int arr[],int n,int k){
    set<int> s;
    for(auto i=0;i<n;i++){
        s.insert(arr[i]);
    }
     n=n-k;
    for(auto i:s){
        n--;
        cout<<n<<" :: "<<i<<endl;
        if(n==0){
            return i;
        }
    }
    return -1;

}

int main(){
    int k;
    cin>>k;

    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<Kthlargest(arr,n,k);

    return 0;
}