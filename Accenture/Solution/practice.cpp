#include<iostream>
using namespace std;

int minsteps(int n){
    if(n<=1){
        return 1;
    }
    int r1 = minsteps(n/3);
    int r2 = minsteps(n/2);
    int r3 = minsteps(n-1);
    int sum = min(r1,min(r2,r3))+1;
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<minsteps(n);
    return 0;
}