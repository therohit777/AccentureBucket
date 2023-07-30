#include<iostream>
using namespace std;


int countSwaps(int a[],int n){
    int count = 0;
    for(int i=0;i<n-1;i++){
        int minidx = i;
        for(int j = i+1;j<n;j++){
            if(a[j]<a[minidx]){
                minidx = j;
            }
        }
        if(minidx!=i){
          swap(a[i],a[minidx]);
          count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countSwaps(a,n);
    return 0;
}