#include<iostream>
using namespace std;

int DivisorSum(int n){
    int DivSum=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            DivSum+=i;
        }
    }
    return DivSum;
}

int main(){
    int n;
    cin>>n;
    cout<<DivisorSum(n);
    return 0;
}