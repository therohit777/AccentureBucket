#include<iostream>
using namespace std;

void rearrange(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    rearrange(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}