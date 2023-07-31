#include<iostream>
using namespace std;

int second_largest(int a[],int n){
    int maxe1 = INT_MIN;
    int maxe2 = INT_MIN;

    for(int i=0;i<n;i++){
        maxe1 = max(maxe1,a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<maxe1 && a[i]>maxe2){
            maxe2=a[i];
        }
    }

    if(maxe2==INT_MIN){
        return -1;
    }
    return maxe2;
}


int main(){
    int n;
    cin>>n;
    int* a = new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<second_largest(a,n);
    return 0;
}