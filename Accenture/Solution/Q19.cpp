#include<iostream>
using namespace std;


int countSwap(int a[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
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
    cout<<countSwap(a,n);
    return 0;
}