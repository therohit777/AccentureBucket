#include<iostream>
using namespace std;


void MAxinArray(int a[],int length){
  int maxe = INT_MIN;
  int maxIdx = 0;
  for(int i=0;i<length;i++){
    if(maxe<a[i]){
        maxe=a[i];
        maxIdx=i;
    }
  }
  cout<<maxe<<endl;
  cout<<maxIdx;
}

int main(){
    int n;
    cin>>n;

    int * arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MAxinArray(arr,n);
    return 0;
}